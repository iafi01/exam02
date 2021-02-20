/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_integer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:35:21 by liafigli          #+#    #+#             */
/*   Updated: 2021/02/20 15:00:48 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_strdup(char *str)
{

}

static int ft_count(int n)
{
    int d = 0;
    if (n == 0)
        return (1);
    while (n > 0)
    {
        n /= 10;
        d++;
    }
    return (d);
}

static char *ft_itoa(int n)
{
    int i;
    char *str;
    int sign;

    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    sign = (n < 0) ? 1 : 0;
    n = (sign == 1) ? n * -1 : n;
    i = ft_count(n);
    if(!(str = (char*)malloc(i + sign + 1)))
        return (0);
    
}

int ft_conversion_integer(int n, t_flags flags)
{
    
}