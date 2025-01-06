/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:35:00 by cari              #+#    #+#             */
/*   Updated: 2025/01/06 04:11:13 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_printf(const char *format, ...);
void			ft_format_control(char *format, va_list arg, int *len);
void			print_base(unsigned long n, char *base, int *len, char *format);
void			print_str(char *str, int *len);
unsigned long	ft_strlen(const char *s);

#endif