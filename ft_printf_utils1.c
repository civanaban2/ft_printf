/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:34:52 by cari              #+#    #+#             */
/*   Updated: 2024/12/10 01:34:54 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_control(char *format, va_list arg)
{
	if (*format == 'c')
		print_char((char) va_arg(arg, int));
	else if (*format == 's')
		print_str(va_arg(arg, char *));
	else if (*format == 'p')
		print_ptr(va_arg(arg, void *));
	else if (*format == 'd')
		print_dec(va_arg(arg, int));
	else if (*format == 'i')
		print_int(va_arg(arg, int));
	else if (*format == 'u')
		print_undec(va_arg(arg, unsigned int));
	else if (*format == 'x')
		print_hex(va_arg(arg, int));
	else if (*format == 'X')
		print_HEX(va_arg(arg, int));
	else if (*format == '%')
		print_prcnt();
}

void	print_char(char chr)
{
	write(1, &chr, 1);
}

void	print_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	print_ptr(void *arg)
{
	
}

void	print_dec(void *)
{
	
}