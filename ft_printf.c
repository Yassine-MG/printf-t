/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:37:52 by ymghazli          #+#    #+#             */
/*   Updated: 2024/01/08 18:09:15 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	print_char(int c)
{
	return (write(1, &c, 1));
}

void	handle_hexadecimal(va_list args, int uppercase)
{
	print_digit(va_arg(args, unsigned int), 16, uppercase);
}

void	handle_address(va_list args)
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
		}
	}
	else
	{
		print_char('0');
		print_char('x');
		print_digit((unsigned long)ptr_val, 16, 0);
	}
}

int	vprintk(const char *fmt, va_list args)
{
	int	state;
	int	count;

	state = 0;
	count = 0;
	while (*fmt)
	{
		if (state == 0)
			handle_state_zero(*fmt, &state, &count);
		else if (state == 1)
		{
			handle_state_one(&fmt, &state, args, &count);
			if (*fmt == '\n')
			{
				write(1, "\n", 1);
			}
		}
		fmt++;
	}
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

// #include <stdio.h>

// int main() {
//     // // Basic functionality tests
//     // printf("Basic functionality test:\n");
//     // ft_printf("Basic functionality test:\n");
//     // printf("Hello, world!\n");
//     // ft_printf("Hello, world!\n");
//     // printf("Character: %c\n", 'A');
//     // ft_printf("Character: %c\n", 'A');
//     // printf("Integer: %d\n", 42);
//     // ft_printf("Integer: %d\n", 42);
//     // printf("Hexadecimal: %x\n", 255);
//     // ft_printf("Hexadecimal: %x\n", 255);
//     // printf("\n");
//     // ft_printf("\n");

//     // // Precision and formatting tests
//     // printf("Precision and formatting test:\n");
//     // ft_printf("Precision and formatting test:\n");
//     // printf("\n");

//     // Special characters and escape sequences
//     // printf("Special characters and escape sequences test:\n");
//     // ft_printf("Special characters and escape sequences test:\n");
//     // printf("Newline: Before\nNewline: After\n");
//     // ft_printf("Newline: Before\nNewline: After\n");
//     // printf("Tab:\tSeparated\n");
//     // ft_printf("Tab:\tSeparated\n");
//     // printf("Backspace\b\n");
//     // ft_printf("Backspace\b\n");
//     // printf("\n");

//     // // Edge cases and boundary conditions
//     // printf("Edge cases and boundary conditions test:\n");
//     // printf("Max integer value: %d\n", 2147483647);
//     // ft_printf("Max integer value: %d\n", 2147483647);
//     // printf("Min integer value: %d\n", -2147483648 );
//     // ft_printf("Min integer value: %d\n", -2147483648 );
//     // printf("\n");

//     // // Error handling
//     printf("Error handling test:\n");
//     printf("Invalid format specifier: %z\n");
//     ft_printf("Invalid format specifier: %z\n");
//     printf("Mismatched arguments: %d %d\n", 10);
//     ft_printf("Mismatched arguments: %d %d\n", 10);
//     // printf("\n");

//     // // Variable argument handling
//     // printf("Variable argument handling test:\n");
//     // printf("%d arguments: %d %d %d\n", 3, 10, 20, 30);
//     // ft_printf("%d arguments: %d %d %d\n", 3, 10, 20, 30);
//     // printf("%d arguments: %c \n", 2, 'A');
//     // ft_printf("%d arguments: %c \n", 2, 'A');
//     // printf("\n");

//     // Performance test: (Measure execution time if needed)

//     // Compatibility tests: Compare behavior with standard specifications

//     // Cross-platform compatibility tests

//     return 0;
// }