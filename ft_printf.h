/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:35:00 by cari              #+#    #+#             */
/*   Updated: 2024/12/17 00:20:03 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
void	ft_format_control(char *format, va_list arg, int *len);
void	print_char(char chr, int *len);
void	print_str(char *str, int *len);
void	print_ptr(void *arg, int *len);
void	print_dec(int num, int *len);
void	print_int(int num, int *len);
void	print_undec(unsigned int num, int *len);
void	print_hex(int num, int *len);
void	print_prcnt(int *len);

#endif