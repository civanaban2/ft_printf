/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:35:03 by cari              #+#    #+#             */
/*   Updated: 2024/12/10 01:27:12 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	
	while (*format)
	{
		if (*format == '%')
		{
			ft_format_control((char*) ++format, args);
		}
		else
			write(1, format, 1);
		format++;
	}
	va_end(args);
	return 1;
}
