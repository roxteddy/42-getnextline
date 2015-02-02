/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/02 18:55:30 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/02 20:21:30 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	char *line;
    int     out;
    int     p[2];
    int     fd;
    int     gnl_ret;

    fd = 1;
    out = dup(fd);
    pipe(p);
    dup2(p[1], fd);
    write(fd, "aaa", 3);
    close(p[1]);
    dup2(out, fd);
    gnl_ret = get_next_line(p[0], &line);
	ft_putnbr(strcmp(line, "aaa"));

	return (0);
}
