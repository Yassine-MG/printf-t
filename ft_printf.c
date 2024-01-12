/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:37:52 by ymghazli          #+#    #+#             */
/*   Updated: 2024/01/12 15:45:06 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	print_char(int c)
{
	return (write(1, &c, 1));
}

void	handle_hexadecimal(va_list args, int uppercase, int *count)
{
	(*count) += print_digit(va_arg(args, unsigned int), 16, uppercase);
}

void	handle_address(va_list args, int *count)
{
	void	*ptr_val;
	char	*nil_str;

	ptr_val = va_arg(args, void *);
	if (ptr_val == NULL)
	{
		nil_str = "(nil)";
		while (*nil_str)
		{
			print_char(*nil_str++);
			(*count)++;
		}
	}
	else
	{
		print_char('0');
		print_char('x');
		(*count) += print_digit((unsigned long)ptr_val, 16, 0) + 2;
	}
}

int	vprintk(const char *fmt, va_list args)
{
	int	state;
	int	count;
	int	i;

	i = 0;
	state = 0;
	count = 0;
	while (fmt[i] != '\0')
		i++;
	while (*fmt)
	{
		if (state == 0)
			handle_state_zero(*fmt, &state, &count);
		else if (state == 1)
		{
			handle_state_one(&fmt, &state, args, &count);
			if (*fmt == '\n')
				write(1, "\n", 1);
		}
		fmt++;
	}
	if (i > 0 && fmt[-1] == '%' && fmt[-2] != '%')
		return (-1);
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		count;

	va_start(args, fmt);
	count = 0;
	count = vprintk(fmt, args);
	va_end(args);
	return (count);
}

// int main()
// {
// 	char *str = "fdsfdgser%u %x %X %i %d %c %s %";
// 	int i,j;
// 	i = ft_printf(str,12,13,13,11,11,'c', "NULL");
// 	printf("\n");
// 	j = printf(str,12,13,13,11,11,'c', "NULL");
// 	printf("\n %d\n %d\n",i,j);
// }
