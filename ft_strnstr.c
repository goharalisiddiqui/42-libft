/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:47:21 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/21 19:59:18 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	nsize;

	nsize = ft_strlen((char *)needle);
	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (*(haystack + i) && (i <= len - nsize))
	{
		if (ft_strncmp(haystack + i, needle, nsize) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
