/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:59:26 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:59:29 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *str;

    str = malloc((ft_strlen(s) + 1) * sizeof(char));
    i = 0;
    while (*(s + i))
    {
        *(str + i) = (*f)(i, *(str + i));
        i++;
    }
    *(str + i) = '\0';
}
