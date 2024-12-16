/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:35:03 by cari              #+#    #+#             */
/*   Updated: 2024/12/17 00:17:53 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		a;
	int		*len;

	va_start(args, format);
	a = 0;
	len = &a;
	while (*format)
	{
		if (*format == '%')
		{
			ft_format_control((char *)++format, args, len);
		}
		else
			write(1, format, 1);
		format++;
	}
	va_end(args);
	return (*len);
}
