/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:00:15 by ymghazli          #+#    #+#             */
/*   Updated: 2024/01/06 14:17:58 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "libftprintf.h"
#include <stdarg.h>
#include <unistd.h>

void	handle_string(va_list args)
{
	const char	*s;

	s = va_arg(args, const char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	while (*s)
		print_char(*s++);
}