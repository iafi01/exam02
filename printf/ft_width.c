/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:42:24 by liafigli          #+#    #+#             */
/*   Updated: 2021/02/20 10:46:12 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_width(int width, int leng, int zero)
{
    int ret = 0;

    while (width - leng > 0)
    {
        if (zero)
            write(1, '0', 1);
        else
            write(1, ' ', 1);
        width--;
        ret++;
    }
    return (ret);
}