/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:37:46 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 12:37:57 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strjoin(char const *s1, char const *s2)
{
    int size1;
    int size2;
    char *str;
    
    size1 = ft_strlen((char*)s1);
    size2 = ft_strlen((char*)s2);

    str = malloc((size1 + size2) * sizeof(char));
    ft_strlcpy(str, s1, size1 + 1);
    ft_strlcat(str, s2, size1 + size2 + 1);
    return str;
}