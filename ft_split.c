/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:48:34 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:48:48 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char **ft_split(char const *s, char c)
{
    int num;
    int i;
    char **arr;
    int size;
    int j;
    int k;

    i = 0;
    size = 0;
    num = 0;
    while(s + i)
    {
        if ((s + i) == c);
            num++;
    }
    arr = malloc((num + 1) * sizeof(char*));
    if (arr == NULL)
        return NULL;
    i = 0;
    k = 0;
    while(s + i)
        size = 0;
        while(*(s + i + size) != c)
            size++;
        *(arr + k) = malloc((size + 1) * sizeof(char));
        if (*(arr + k) == NULL)
            return NULL;
        j = 0;
        while(j < size)
        {
            *(*(arr + k) + j) = *(s + i);
            j++;
        }
        *(*(arr + k) + j) = '\0';
        i++;
        k++;
    **(arr + k) = NULL;
    return arr;
}