/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:25:10 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/28 11:32:10 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(long long n)
{
	int		count;
	char	*hex;

	count = 1;
	hex = "0123456789abcdef";
	if (n > 15)
		count += ft_putpointer(n / 16);
	ft_putchar(hex[n % 16]);
	return (count);
}

int	ft_pointer(long long n)
{
	int	count;

	if (n == 0)
		return (ft_putstr("0x0"));
	else if (n < 0)
		return (ft_putstr("0x8000000000000000"));
	else
		ft_putstr("0x");
	count = ft_putpointer(n);
	return (count + 2);
}
