/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_string.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:35:21 by liafigli          #+#    #+#             */
/*   Updated: 2021/02/20 12:42:53 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_substr(char *s,int start, int len)
{
    int i = 0;
    char *str;

    if (!s)
        return (NULL);
    if (!(str = (char *)malloc(len +1)))
        return (NULL);
    while (i < len && (start + i) < ft_strlen(s))
    {
        str[i] = s[i + start];
        i++;
    }
    return (str);
}

int ft_conversion_string(char *str, t_flags flags)
{
    char *s;
    if (flags.precision > 0)
        s = ft_substr(str, 0, flags.precision);
    ft_width(flags.width,ft_strlen(s),0);
    write(1, s, ft_strlen(s));
}