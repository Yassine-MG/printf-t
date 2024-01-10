/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:43:31 by yassine           #+#    #+#             */
/*   Updated: 2024/01/09 18:19:15 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	unsigned int	nbr;

	if (n < 0)
	{
		print_char('-');
		nbr = (unsigned int)(-n);
	}
	else
		nbr = (unsigned int)(n);
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		print_char(nbr + 48);
	}
}
