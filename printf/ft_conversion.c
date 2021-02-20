/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:34:14 by liafigli          #+#    #+#             */
/*   Updated: 2021/02/20 10:34:45 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_is_type(int c)
{
    return (c == 'x' || c == 'd' || c == 's' || c == 'i');
}

int ft_isdigit(int c)
{
    return (c >= '0' || c<= '9');
}

int ft_conversion(int c, t_flags flags, va_list args)
{
    int num = 0;
    if (c == 'd' || c == 'i')
        num += ft_conversion_integer(va_arg(args, int), flags);
    if (c == 's')
        num += ft_conversion_string(va_arg(args, char*), flags);
    if (c == 'x')
        num += ft_conversion_hexa(va_arg(args, unsigned int), flags);
    return (num);
}