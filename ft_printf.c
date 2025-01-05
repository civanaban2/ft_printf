/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:35:03 by cari              #+#    #+#             */
/*   Updated: 2025/01/03 00:01:00 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		*ptr;

	va_start(args, format);
	len = 0;
	ptr = &len;
	while (*format)
	{
		if (*format == '%')
		{
			if (!(format + 1))
				return (0);
			ft_format_control((char *)++format, args, ptr);
		}
		else
			*ptr += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (*ptr);
}
