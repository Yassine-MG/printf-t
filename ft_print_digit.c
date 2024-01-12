/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:00:19 by ymghazli          #+#    #+#             */
/*   Updated: 2024/01/11 18:17:16 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	print_digit(unsigned long n, int base, int uppercase)
{
	int		count;
	char	*symbols;

	count = 0;
	if (uppercase)
	{
		symbols = "0123456789ABCDEF";
	}
	else
	{
		symbols = "0123456789abcdef";
	}
	if (n >= (unsigned)base)
	{
		count += print_digit(n / base, base, uppercase);
	}
	else if (!n)
	{
		count++;
	}
	print_char(symbols[n % base]);
	return (count + 1);
}
