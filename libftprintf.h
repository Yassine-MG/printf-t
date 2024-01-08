/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:00:23 by ymghazli          #+#    #+#             */
/*   Updated: 2024/01/04 14:00:24 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>

void	handle_address(va_list args);
void	handle_character(va_list args);
void	handle_string(va_list args);
void	handle_state_zero(char fmt_char, int *state, int *count);
void	handle_hexadecimal(va_list args, int uppercase);
void	handle_integer(va_list args);
void	handle_state_one(const char **fmt, int *state, va_list args,
			int *count);
int		print_char(int c);
int		print_digit(unsigned long n, int base, int uppercase);
int		vprintk(const char *fmt, va_list args);
int		ft_printf(const char *fmt, ...);

#endif
