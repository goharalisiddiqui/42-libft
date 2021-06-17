/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:38:34 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 12:38:58 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    int ind;
    int size;
    char *sub;
    
    size = 0;
    while ((s + start + size) && (size < len))
        size++;
    sub = malloc((size + 1) * sizeof(char));
    if (!sub)
        return sub;
    ind = 0;
    while(ind <= size)
    {
        *(sub + ind) = *(s + start + ind);
        ind++;
    }
    return sub;
}