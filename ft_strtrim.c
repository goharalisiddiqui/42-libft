/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:47:50 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:48:01 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int i;
    char *str;

    start = 0;
    i = 0;
    end = ft_strlen(s1) - 1;
    while (ft_strchr(set, (int)*(s1 + start) != NULL))
       start++;
    while (ft_strchr(set, (int)*(s1 + end) != NULL))
       end--;
    str = malloc(((end-start) + 1) * sizeof(char));
    while (i < (end - start))
    {
        *(str + i) = *(s1 + start + i);
        i++;
    }
    *(str + i) = '\0';
    return str;
}