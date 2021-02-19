/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:38:40 by liafigli          #+#    #+#             */
/*   Updated: 2021/02/19 16:16:21 by liafigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_check(char *str, char c, int i)
{
    int j;

    j = 0;
    while (j < i)
    {
        if (str[j] == c)
            return (0);
        ++j;
    }
    return (1);
}

void ft_iter(char *s1, char *s2)
{
    int i;
    int j;
    
    i = 0;
    while (s1[i])
    {
        if (ft_check(s1, s1[i], i) == 1)
        {
            j = 0;
            while (s2[j])
            {
                if (s2[j] == s1[i])
                {
                    write(1, &s1[i], 1);
                    break ;
                }
                ++j;
            }
        }
        ++i;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_iter(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}