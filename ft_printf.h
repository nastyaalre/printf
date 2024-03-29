/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:09:21 by aalremei          #+#    #+#             */
/*   Updated: 2022/11/02 10:13:04 by aalremei         ###   ########.fr       */
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
int		ft_pointer(unsigned long n);
int		ft_printf(const char *st, ...);
int		ft_dgtlen(int i);
int		ft_uns_dgtlen(unsigned int i);
int		ft_lc_hex(unsigned int i);
int		ft_uc_hex(unsigned int i);

#endif
