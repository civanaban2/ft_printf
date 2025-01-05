/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:35:00 by cari              #+#    #+#             */
/*   Updated: 2025/01/02 23:59:14 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_printf(const char *format, ...);
void			ft_format_control(char *format, va_list arg, int *len);
unsigned long	ft_strlen(const char *s);
void			print_char(char c, int *len);
void			print_str(char *str, int *len);
void			print_base(unsigned long long n, char *base, int *len);

#endif