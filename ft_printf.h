/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:09:21 by aalremei          #+#    #+#             */
/*   Updated: 2022/10/28 11:07:15 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_putchar(char c);
size_t	ft_putstr(char *s);
size_t	ft_strlen(const char *str);
size_t	ft_itoa(int i);
size_t	ft_itoa_uns(unsigned int i);
size_t	ft_itoa_lchex(unsigned int i);
size_t	ft_itoa_uchex(unsigned int i);
int		ft_pointer(long long n);
int		ft_printf(const char *st, ...);
#endif
