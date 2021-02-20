/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 09:43:13 by liafigli          #+#    #+#             */
/*   Updated: 2021/02/20 10:36:45 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags ft_init_flags(void)
{
    t_flags flags;
    flags.width = 0;
    flags.precision = 0;
    return (flags);
}

int ft_check(char *s, va_list args)
{
    int i = 0;
    t_flags flags;
    int num = 0;
    while (s[i])
    {
        flags = ft_init_flags();
        if (s[i] == '%' && s[i + 1])
        {
            if (ft_isdigit(s[i]))
                flags.width = (flags.width * 10) + (s[i] - '0');
            if (s[i] == '.' && s[i++])
                flags.precision = (flags.precision * 10) + (s[i] - '0');
            if (ft_is_type(s[i]))
                ft_conversion(s[i], flags, args);
            i++;
        }
        else if (s[i] != '%')
            write(1, &s[i], 1);
    }
}

int ft_printf(const char *str, ... )
{
    char *s;
    int count;
    va_list args;
    int num = 0;

    s = ft_strdup(str);
    va_start(args, str);
    num += ft_check(s, args);
    va_end(args);
    free(s);
    return (num);
}
