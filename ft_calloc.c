/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:57:14 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:58:37 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_calloc(size_t count, size_t size)
{
    int i;
    void *mem;

    i = 0;
    mem = malloc(count * size);
    if (mem == NULL)
        return NULL;
    while (i < count * size)
    {
        *(unsigned char*)mem = NULL;
        i++;
    }
    return mem;
}