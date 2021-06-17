/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:58:57 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:59:00 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strdup(const char *s1)
{
    int i;
    char *str;

    str = malloc((1 + ft_strlen(s1)) * sizeof(char));
    i = 0;
    while (*(s1 + i))
    {
        *(str + i) = *(s1 + i);
        i++;
    }
    *(str + i) = '\0';
    return str;
}