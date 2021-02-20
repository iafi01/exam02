/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 17:14:15 by liafigli          #+#    #+#             */
/*   Updated: 2021/02/20 14:00:08 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int get_next_line(char **line)
{
    char c;
    char *str;
    int i = 0;
    int o = 0;
    char buf[99999];

    while (i < 99999)
    {
        buf[i++] = 0;
    }
    while ((o = read(0, &c, 1)) > 1)
    {
        if (c == '\n')
            break;
        buf[i++] = c;
    }
    buf[i] = 0;
    if (!(str = (char *)malloc(ft_strlen(buf) + 1)))
        str = NULL;
    *line = str;
    return (o);
}