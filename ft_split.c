/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:48:34 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/21 17:53:28 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char    **ft_split(char const *s, char c)
{
    int num;
    int i;
    char **arr;
    int size;
    int j;
    int k;

    if (s == NULL)
        return NULL;
    i = 0;
    size = 0;
    num = 0;
    while(*(s + i))
    {
        if (*(s + i) == c)
        {    
            num++;
            while(*(s + i) == c)
                i++;
        }
        else
            i++;
    }
    arr = malloc((num + 1) * sizeof(char*));
    if (arr == NULL)
        return NULL;
    i = 0;
    k = 0;
    while(*(s + i))
    {
        if (*(s + i) == c)
            i++;
        else 
        {
            size = 0;
            while(*(s + i + size) != c && *(s + i + size))
                size++;
            *(arr + k) = malloc((size + 1) * sizeof(char));
            if (*(arr + k) == NULL)
            {
                free(arr);
                return NULL;
            }
            j = 0;
            while(j < size)
            {
                *(*(arr + k) + j) = *(s + i);
                j++;
                i++;
            }
            *(*(arr + k) + j) = '\0';
            k++;
        }
    }
    *(arr + k) = NULL;
    return arr;
}