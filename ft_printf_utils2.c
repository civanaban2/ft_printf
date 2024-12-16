/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cari <cari@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:35:05 by cari              #+#    #+#             */
/*   Updated: 2024/12/17 00:16:11 by cari             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_int(int num, int *len)
{
	*len += write(1, ft_itoa(num), ft_strlen(ft_itoa(num)));
}

void	print_undec(unsigned int num, int *len)
{
	*len += write(1, ft_itoa(num), ft_strlen(ft_itoa(num)));
}

void	print_hex(int num, int *len)
{
	*len += write(1, ft_itoa(num), ft_strlen(ft_itoa(num)));
}

void	print_prcnt(int *len)
{
	*len += write(1, "%", 1);
}
