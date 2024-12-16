/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:34:52 by cari              #+#    #+#             */
/*   Updated: 2024/12/17 00:16:21 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_control(char *format, va_list arg, int *len)
{
	if (*format == 'c')
		print_char((char) va_arg(arg, int), len);
	else if (*format == 's')
		print_str(va_arg(arg, char *), len);
	else if (*format == 'p')
		print_ptr(va_arg(arg, void *), len);
	else if (*format == 'd')
		print_dec(va_arg(arg, int), len);
	else if (*format == 'i')
		print_int(va_arg(arg, int), len);
	else if (*format == 'u')
		print_undec(va_arg(arg, unsigned int), len);
	else if (*format == 'x')
		print_hex(va_arg(arg, int), len);
	else if (*format == 'X')
		print_HEX(va_arg(arg, int), len);
	else if (*format == '%')
		print_prcnt(len);
}

void	print_char(char chr, int *len)
{
	*len += write(1, &chr, 1);
}

void	print_str(char *str, int *len)
{
	while (*str)
	{
		*len += write(1, str, 1);
		str++;
	}
}

void	print_ptr(void *arg, int *len)
{
	*len += write(1, arg, 1);
}

void	print_dec(int num, int *len)
{
	*len += write(1, ft_itoa(num), ft_strlen(ft_itoa(num)));
}
