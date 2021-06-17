/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:45:16 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:45:33 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_strchr(const char *s, int c)
{
    int ind;

    ind = 0;
    while (*(s + ind))
    {
        if (*(s + ind) == c)
            return (s + ind);
        ind++;
    }
    if (*(s + ind) == c)
        return (s + ind);
    return NULL;
}