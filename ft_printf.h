/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urmet <urmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:35:00 by cari              #+#    #+#             */
/*   Updated: 2024/12/15 19:13:23 by urmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
void	ft_format_control(char *, va_list, int *);
void	print_char(char, int *);
void	print_str(char *, int *);
void	print_ptr(void *, int *);
void	print_dec(int, int *);
void	print_int(int, int *);
void	print_undec(unsigned int, int *);
void	print_hex(int, int *);
void	print_HEX(int, int *);
void	print_prcnt(int *);

#endif