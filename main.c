/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/02 18:55:30 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 00:42:45 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

static void test01(void)
{
    char    *line;
    int     out;
    int     p[2];
    int     fd;

    fd = 1;
    out = dup(fd);
    pipe(p);

	ft_putendl("Test 01 \"aaa\\nbbb\\nccc\\nddd\\n\"");

    dup2(p[1], fd);
    write(fd, "aaa\nbbb\nccc\nddd\n", 16);
    dup2(out, fd);
    close(p[1]);
	get_next_line(p[0], &line);
	ft_putendl(line);
    get_next_line(p[0], &line);
	ft_putendl(line);
    get_next_line(p[0], &line);
	ft_putendl(line);
    get_next_line(p[0], &line);
	ft_putendl(line);
}

static void test02(void)
{
    char *line;
    int     out;
    int     p[2];
    int     fd;
    int     gnl_ret;

	ft_putendl("Test02 \"aaa\" + EOF");
    fd = 1;
    out = dup(fd);
    pipe(p);
    dup2(p[1], fd);
    write(fd, "aaa", 3);
    close(p[1]);
    dup2(out, fd);
    gnl_ret = get_next_line(p[0], &line);
	ft_putendl(line);
	ft_putnbr(gnl_ret);
	ft_putendl("");
}


static void test03(void)
{
    char    *line;
    int     out;
    int     p[2];
    char    *str;
    int     gnl_ret;

	ft_putendl("Test03");
    str = (char *)malloc(1000 * 1000);
    *str = '\0';
    strcat(str, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur in leo dignissim, gravida leo id, imperdiet urna. Aliquam \
magna nunc, maximus quis eleifend et, scelerisque non dolor. Suspendisse augue augue, tempus");
    strcat(str, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur in leo dignissim, gravida leo id, imperdiet urna. Aliquam \
magna nunc, maximus quis eleifend et, scelerisque non dolor. Suspendisse augue augue, tempus");
    strcat(str, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur in leo dignissim, gravida leo id, imperdiet urna. Aliquam \
magna nunc, maximus quis eleifend et, scelerisque non dolor. Suspendisse augue augue, tempus");
    out = dup(1);
    pipe(p);
    dup2(p[1], 1);

    write(1, str, strlen(str));
    close(p[1]);
    dup2(out, 1);
    gnl_ret = get_next_line(p[0], &line);
	ft_putendl(line);
	ft_putstr("strcmp(line, str) == ");
    ft_putnbr(strcmp(line, str));
	ft_putendl("");
    ft_putnbr(gnl_ret);
	ft_putendl("");
}

static void test04(void)
{
    char    *line;
    int     out;
    int     p[2];
    int     fd;
    int     gnl_ret;

	ft_putendl("Test03");

    out = dup(1);
    pipe(p);

    fd = 1;
    dup2(p[1], fd);
    write(fd, "abc\n\n", 5);
    close(p[1]);
    dup2(out, fd);

	/* Read abc and new line */
    gnl_ret = get_next_line(p[0], &line);
	ft_putendl(line);
	ft_putnbr(gnl_ret);
	ft_putendl("");

    /* Read new line */
    gnl_ret = get_next_line(p[0], &line);
	ft_putendl(line);
	ft_putnbr(gnl_ret);
	ft_putendl("");

    /* Read again, but meet EOF */
    gnl_ret = get_next_line(p[0], &line);
	ft_putendl(line);
	ft_putnbr(gnl_ret);
	ft_putendl("");

    /* Let's do it once again */
    gnl_ret = get_next_line(p[0], &line);
	ft_putendl(line);
	ft_putnbr(gnl_ret);
	ft_putendl("");
}

int		main(void)
{
	test01();
	test02();
	test03();
	test04();
	return (0);
}
