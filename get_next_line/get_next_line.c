/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 17:14:15 by liafigli          #+#    #+#             */
/*   Updated: 2021/02/19 17:36:29 by liafigli         ###   ########.fr       */
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
    int i;
    int o;

    i = 0;
    while ((o = read(0, &c, 1)) > 1)
    {
        if (c == '\n')
            break;
        free(line);
        line = malloc(ft_strlen(line) + 1);
        *line[i++] = c;
    }
    *line[i++] = 0;
    return (o);
}