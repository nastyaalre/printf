/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_dgtlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:53:11 by aalremei          #+#    #+#             */
/*   Updated: 2022/11/02 09:24:01 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_uns(unsigned int i)
{
	if (i >= 10)
	{
		ft_putnbr_uns(i / 10);
		ft_putnbr_uns(i % 10);
	}
	else
		ft_putchar(i + 48);
}

int	ft_uns_dgtlen(unsigned int i)
{
	int				len;

	len = 0;
	ft_putnbr_uns(i);
	if (i == 0)
		len = 1;
	while (i)
	{
		i = i / 10;
		len++;
	}
	return (len);
}
