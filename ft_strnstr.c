/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:47:21 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:47:33 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	if (*needle == '\0')
        return haystack;

    i = 0;
	while (*(haystack + i))
	{
		if (ft_strcmp(haystack, needle, len) == 0)
			return (haystack + i);
		i++;
	}
	return (NULL);
}