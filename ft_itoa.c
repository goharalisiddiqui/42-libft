/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:49:06 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:49:54 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_itoa(int n)
{
    int numchr;
    int a;
    char *str;

    a = n;
    while ((a / 10) > 0)
    {
        numchr++;
        a %= 10;
    }
    numchr++;
    str = malloc((numchr + 1) * sizeof(char));
    if (str == NULL)
        return NULL;
    a = 0;
    while ((n / 10) > 0)
    {
        *(str + a) = (n / 10) +  48;
        n %= 10;
        a++;
    }
    *(str + a) = '\n';
    return str;
}