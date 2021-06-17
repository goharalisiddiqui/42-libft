/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:55:00 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:55:09 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    int i;

    i = 0;
    while(i < n)
    {
        *((unsigned char*)dst + i) = *((unsigned char*)src + i);
        if (*((unsigned char*)src + i) == c)
            return *((unsigned char*)dst + i + 1);
        i++;
    }
    return NULL;
}