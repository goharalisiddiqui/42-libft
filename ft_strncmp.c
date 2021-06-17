/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:46:42 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:46:58 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (*(s1 + i) && *(s2 + i) && n  - i)
	{
		if (*(s1 + i) > *(s2 + i))
			return (1);
        else if (*(s1 + i) < *(s2 + i))
            return (-1);
		i++;
	}
	return (0);
}