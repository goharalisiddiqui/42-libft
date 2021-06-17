/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:46:01 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/17 13:44:43 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int sign;
	int digits;

	sign = 1;
	digits = 0;
	while (((*str >= 9 && *str <= 13) || *str == ' ') && *str != '\0')
		str++;
	while ((*str == '-' || *str == '+') && *str != '\0')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		digits *= 10;
		digits += *str - '0';
		str++;
	}
	return (digits * sign);
}