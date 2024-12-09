/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:35:00 by cari              #+#    #+#             */
/*   Updated: 2024/12/10 01:26:39 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_format_control(char *format, va_list arg);
void	print_char(char);
void	print_str(char *);
void	print_ptr(void *);
void	print_dec(int);
void	print_int(int);
void	print_undec(unsigned int);
void	print_hex(int);
void	print_HEX(int);
void	print_prcnt();

#endif