/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_state_one.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:00:04 by ymghazli          #+#    #+#             */
/*   Updated: 2024/01/12 15:51:29 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

void	handle_state_one(const char **fmt, int *state, va_list args, int *count)
{
	if (**fmt == 'c')
	{
		handle_character(args);
		(*count)++;
	}
	else if (**fmt == '%')
	{
		print_char('%');
		(*count)++;
	}
	else if (**fmt == 's')
		handle_string(args, count);
	else if (**fmt == 'i' || **fmt == 'd')
		handle_integer(args, count);
	else if (**fmt == 'x')
		handle_hexadecimal(args, 0, count);
	else if (**fmt == 'p')
		handle_address(args, count);
	else if (**fmt == 'X')
		handle_hexadecimal(args, 1, count);
	else if (**fmt == 'u')
		(*count) += print_digit(va_arg(args, unsigned int), 10, 0);
	else
		print_char(**fmt);
	*state = 0;
}
