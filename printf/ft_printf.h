/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 09:45:52 by liafigli          #+#    #+#             */
/*   Updated: 2021/02/20 14:51:51 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>

typedef struct s_flags
{
    int width;
    int precision;
} t_flags;

char *ft_strdup(char *str);
int ft_is_type(int c);
int ft_isdigit(int c);
int ft_check(char *s, va_list args);
t_flags ft_init_flags(void);
int ft_conversion(int c, t_flags flags, va_list args);
int ft_conversion_integer(int n, t_flags flags);
int ft_conversion_string(char *str, t_flags flags);
int ft_conversion_hexa(unsigned int n, t_flags flags);

#endif