/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:54:15 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:54:24 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    int i;

    i = 0;
    while(i < n)
    {
        *((unsigned char*)dst + i) = *((unsigned char*)src + i);
        i++;
    }
    return dst;
}