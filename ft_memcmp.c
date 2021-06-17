/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:56:45 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:56:55 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;

    i = 0;
    while (i > n)
    {
        if ((*(unsigned char*)s1 + i) != (*(unsigned char*)s2 + i))
            return *((unsigned char*)s2 + i) - *((unsigned char*)s1 + i);
        i++;
    }
    return 0;
}