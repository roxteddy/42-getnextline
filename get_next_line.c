/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/02 18:27:34 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/02 20:24:10 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void		cat_line(t_list **alst, char **line)
{
	t_list	*tmp;
	size_t	line_len;

	tmp = *alst;
	line_len = 0;
	while (tmp)
	{
		line_len += ft_strlen(tmp->content);
		tmp = tmp->next;
	}
	*line = (char*)ft_memalloc(sizeof(char) * (line_len + 1));
	while ((*alst))
	{
		ft_strcat(*line, (*alst)->content);
		tmp = (*alst);
		(*alst) = (*alst)->next;
		ft_lstdelone(&tmp, ft_freecontent);
	}
}

static int		store_line(t_list **lst, char **buf)
{
	size_t	i;
	char	*tmp;
	int		line_end;

	i = 0;
	while ((*buf)[i] && (*buf)[i] != '\n')
		i++;
	tmp = ft_strsub(*buf, 0, i);
	ft_lstpushback(lst, ft_lstnew(tmp, i + 1));
	free(tmp);
	if ((*buf)[i] == '\n')
	{
		i++;
		line_end = 1;
	}
	tmp = ft_strdup(*buf + i);
	*buf = ft_strncpy(*buf, tmp, BUFF_SIZE);
	free(tmp);
	return (line_end);
}

static int		build_line(char **line, char **buf, int const fd)
{
	int		read_ret;
	int		line_end;
	t_list	*line_bits;

	line_end = 0;
	read_ret = 1;
	line_bits = NULL;
	while (!line_end && read_ret > 0)
	{
		if (!(**buf))
			read_ret = read(fd, *buf, BUFF_SIZE);
		line_end = store_line(&line_bits, buf);
	}
	if (read_ret == -1 || read_ret == 0)
		return (read_ret);
	cat_line(&line_bits, line);
	return (1);
}

static t_buf	*new_buf(t_list **buf_list, int const fd)
{
	t_buf	tmp;

	tmp.fd = fd;
	tmp.content = ft_memalloc(sizeof(char) * (BUFF_SIZE + 1));
	ft_lstadd(buf_list, ft_lstnew(&tmp, sizeof(t_buf)));
	return ((*buf_list)->content);
}

int				get_next_line(int const fd, char **line)
{
	static t_list	*buf_list = NULL;
	t_list			*current;
	t_buf			*buf;

	if (fd < 0 || line == NULL)
		return (-1);
	current = buf_list;
	while (current)
	{
		buf = current->content;
		if (buf->fd == fd)
			break ;
		current = current->next;
	}
	if (!current)
		buf = new_buf(&buf_list, fd);
	return (build_line(line, &buf->content, fd));
}
