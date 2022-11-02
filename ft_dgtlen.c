/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dgtlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:49:50 by aalremei          #+#    #+#             */
/*   Updated: 2022/11/02 10:19:02 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * (-1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

int	ft_dgtlen(int i)
{
	int	len;

	ft_putnbr(i);
	if (i <= 0)
		len = 1;
	else
		len = 0;
	while (i)
	{
		i = i / 10;
		len++;
	}
	return (len);
}
