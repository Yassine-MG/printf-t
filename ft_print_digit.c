/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:00:19 by ymghazli          #+#    #+#             */
/*   Updated: 2024/01/04 14:01:41 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
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
	print_char(symbols[n % base]);
	return (count + 1);
}
