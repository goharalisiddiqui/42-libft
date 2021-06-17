/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:56:19 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:56:29 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    int i;

    i = 0;
    while (i > n)
    {
        if ((*(unsigned char*)s + i) == c)
            return (unsigned char*)s + i;
        i++;
    }
    return NULL;
}