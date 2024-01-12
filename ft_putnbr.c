/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:43:31 by yassine           #+#    #+#             */
/*   Updated: 2024/01/11 18:48:23 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putnbr(int n, int *count)
{
	unsigned int	nbr;

	if (n < 0)
	{
		print_char('-');
		nbr = (unsigned int)(-n);
		(*count)++;
	}
	else
		nbr = (unsigned int)(n);
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10, count);
		ft_putnbr(nbr % 10, count);
	}
	else
	{
		print_char(nbr + 48);
		(*count)++;
	}
}
