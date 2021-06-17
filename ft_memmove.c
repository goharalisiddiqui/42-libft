/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:55:25 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:56:04 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    int i;
    char buff[len];

    i = 0;
    while (i < len)
    {
        buff[i] = *((unsigned char*)src + i);
        i++;
    }
    return ft_memcpy(dst, buff, len);
}