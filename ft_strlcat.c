/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:36:46 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 12:37:23 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int     ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int size;
    int ind;
    size = ft_strlen(dst);

    ind = size;
    while(ind < dstsize)
    {
        *(dst + ind) = *(src + ind - size);
        ind++;
    }
    *(dst + dstsize) = '\0';
    return ft_strlen(dst) + ft_strlen((char*)src);
}