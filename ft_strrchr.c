/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:45:56 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:46:10 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_strrchr(const char *s, int c)
{
    int ind;

    ind = ft_strlen(s);
    while (ind >= 0)
    {
        if (*(s + ind) == c)
            return (s + ind);
        ind--;
    }
    return NULL;
}