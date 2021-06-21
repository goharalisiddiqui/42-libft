/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:33:26 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/21 19:54:25 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	ind;

	ind = 0;
	if (dstsize > 0)
	{
		while ((ind < (dstsize - 1)) && *(src + ind))
		{
			*(dst + ind) = *(src + ind);
			ind++;
		}
		*(dst + ind) = '\0';
	}
	return (ft_strlen((char *)src));
}
