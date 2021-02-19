/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liafigli <liafigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:38:40 by liafigli          #+#    #+#             */
/*   Updated: 2021/02/19 16:40:59 by liafigli         ###   ########.fr       */
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
    int k;
    char *s3;
    
    i = 0;
    j = 0;
    k = 0;
    while (s1[i])
    {
        if (ft_check(s3, s1[i], i) == 1)
        {
            write(1, &s1[i], 1);
            s3[k++] = s1[i];
            break;
        }
        i++;
    }
    while (s2[j])
    {
        if (ft_check(s3, s2[j], j) == 1)
        {
            write(1, &s2[j], 1);
            s3[k++] = s2[j];
            break;
        }
        j++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_iter(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}