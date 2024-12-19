/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:35:03 by cari              #+#    #+#             */
/*   Updated: 2024/12/20 01:46:46 by urmet            ###   ########.fr       */
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
			ft_format_control((char *)++format, args, ptr);
		}
		else
			*ptr += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (*ptr);
}
