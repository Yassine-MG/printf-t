/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:00:23 by ymghazli          #+#    #+#             */
/*   Updated: 2024/01/11 18:27:22 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

void	handle_address(va_list args, int *count);
void	handle_character(va_list args, int *count);
int		handle_string(va_list args, int *count);
void	handle_state_zero(char fmt_char, int *state, int *count);
void	handle_hexadecimal(va_list args, int uppercase, int *count);
void	handle_integer(va_list args, int *count);
void	handle_state_one(const char **fmt, int *state, va_list args,
			int *count);
int		print_char(int c);
int		print_digit(unsigned long n, int base, int uppercase);
int		vprintk(const char *fmt, va_list args);
void	ft_putnbr(int n, int *count);
int		ft_printf(const char *fmt, ...);

#endif
