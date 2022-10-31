/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 08:37:57 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/28 11:32:24 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length(char ch, va_list list)
{
	int	length;

	length = 0;
	if (ch == 'c')
		length += ft_putchar(va_arg(list, int));
	else if (ch == 's')
		length += ft_putstr(va_arg(list, char *));
	else if (ch == 'p')
		length += ft_pointer(va_arg(list, long long));
	else if (ch == 'd' || ch == 'i')
		length += ft_itoa(va_arg(list, int));
	else if (ch == 'u')
		length += ft_itoa_uns(va_arg(list, int));
	else if (ch == 'x')
		length += ft_itoa_lchex(va_arg(list, unsigned int));
	else if (ch == 'X')
		length += ft_itoa_uchex(va_arg(list, unsigned int));
	else
		length += ft_putchar(ch);
	return (length);
}

int	ft_printf(const char *st, ...)
{
	va_list	list;
	int		i;
	int		tot_len;

	i = 0;
	tot_len = 0;
	va_start(list, st);
	while (st[i] != '\0')
	{
		if (st[i] == '%')
		{
			tot_len += ft_length(st[i + 1], list);
			i++;
		}
		else
		{
			tot_len += ft_putchar(st[i]);
		}
		i++;
	}
	va_end(list);
	return (tot_len);
}
//  #include <limits.h>
 
// int main()
// {
//     int a = 245;
//     int b = 49327634;
//     int c = -2147483648;
//     char *s1 = NULL;
//     char *s2 = "ABCDEF";
//     char *pointer1;
//     char *pointer2 = "AABBCC";
//     char c1 = '1';
//     char c2 = 'a';
//     unsigned int u1 = 56756;
//     int hex1 = 256;
//     int hex2 = 7856892;
//     int l1 = 0;
//     int l2 = 0;
//     // l1 = ft_printf("integers and uint: %i %d %d %u\n", a, b, c, u1);
//     // l2 =    printf("integers and uint: %i %d %d %u\n", a, b, c, u1);
//     // printf("ft_printf length: %d\n", l1);
//     // printf(".  printf length: %d\n", l2);
//     // l1 = ft_printf("Strings: %s %s\n", s1, s2);
//     // l2 =    printf("Strings: %s %s\n", s1, s2);
//     // printf("ft_printf length: %d\n", l1);
//     // printf(".  printf length: %d\n", l2);
//     l1 = ft_printf("Pointers: %p %p\n", LONG_MIN, LONG_MAX);
//     l2 =    printf("Pointers: %p %p\n", LONG_MIN, LONG_MAX);
//     printf("ft_printf length: %d\n", l1);
//     printf(".  printf length: %d\n", l2);
//     // l1 = ft_printf("Hex: %x %x %X %X\n", hex1, hex2, hex1, hex2);
//     // l2 =    printf("Hex: %x %x %X %X\n", hex1, hex2, hex1, hex2);
//     // printf("ft_printf length: %d\n", l1);
//     // printf(".  printf length: %d\n", l2);
//     // l1 = ft_printf("Percent sign check: %%  %m\n");
//     // l2 =    printf("Percent sign check: %%  %m\n");
//     // printf("ft_printf length: %d\n", l1);
//     // printf(".  printf length: %d\n", l2);
//     // l1 = ft_printf("%i%d%u%p%s\n", a, b, c, s2, s1);
//     // l2 =    printf("%i%d%u%p%s\n", a, b, c, s2, s1);
//     // printf("ft_printf length: %d\n", l1);
//     // printf(".  printf length: %d\n", l2);
//     return 0;
// }