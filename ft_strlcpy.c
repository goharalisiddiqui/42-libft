/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:33:26 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 12:36:11 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int     ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    int ind;

    ind = 0;
    while(ind < dstsize)
    {
        *(dst + ind) = *(src + ind);
        ind++;
    }
    *(dst + dstsize) = '\0';
    return ft_strlen((char*)src);
}