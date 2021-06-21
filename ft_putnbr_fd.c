/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:53:01 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/21 19:44:32 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		numchr;
	int		i;
	char	*str;

	i = 1;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		while ((n / i) > 9)
			i *= 10;
		while (n > 0)
		{
			ft_putchar_fd((char)(n / i) + 48, fd);
			i /= 10;
			n %= i;
		}
	}
}
