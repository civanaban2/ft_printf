/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:34:52 by cari              #+#    #+#             */
/*   Updated: 2024/12/20 01:45:35 by urmet            ###   ########.fr       */
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
	{
		*len += write(1, "0x", 2);
		print_base(va_arg(arg, unsigned long long), "0123456789abcdef", len);
	}
	else if (*format == 'd' || *format == 'i')
		print_base(va_arg(arg, int), "0123456789", len);
	else if (*format == 'u')
		print_base(va_arg(arg, unsigned int), "0123456789", len);
	else if (*format == 'x')
		print_base(va_arg(arg, unsigned int), "0123456789abcdef", len);
	else if (*format == 'X')
		print_base(va_arg(arg, unsigned int), "0123456789ABCDEF", len);
	else if (*format == '%')
		print_char('%', len);
}

void	print_char(char c, int *len)
{
	*len += write(1, &c, 1);
}

void	print_str(char *str, int *len)
{
	if (!str)
		str = "(null)";
	*len += write(1, str, ft_strlen(str));
}

void	print_base(unsigned long long n, char *base, int *len)
{
	if (n >= ft_strlen(base))
	{
		print_base(n / ft_strlen(base), base, len);
		print_base(n % ft_strlen(base), base, len);
	}
	else
		*len += write(1, &base[n], 1);
}
