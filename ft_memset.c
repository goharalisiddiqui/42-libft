/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:53:26 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:53:38 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memset(void *b, int c, size_t len)
{
    int i;

    i = 0;
    while (i < len)
    {
        *((unsigned char*)b + i) = (unsigned char)c;
        i++;
    }
    return b;
}