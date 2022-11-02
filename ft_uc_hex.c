/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uc_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:06:20 by aalremei          #+#    #+#             */
/*   Updated: 2022/11/02 09:26:10 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_uchex(unsigned int n)
{
	if (n / 16 > 0)
	{
		ft_putnbr_uchex(n / 16);
	}
	if ((n % 16) >= 10 && (n % 16) < 16)
	{
		ft_putchar((n % 16) + 55);
	}
	else
		ft_putchar((n % 16) + 48);
}

int	ft_uc_hex(unsigned int i)
{
	int				len;

	len = 0;
	ft_putnbr_uchex(i);
	if (i == 0)
		len = 1;
	while (i)
	{
		i = i / 16;
		len++;
	}
	return (len);
}
