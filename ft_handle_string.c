/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:00:15 by ymghazli          #+#    #+#             */
/*   Updated: 2024/01/11 17:45:29 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	handle_string(va_list args, int *count)
{
	const char	*s;
	int			i;

	i = 0;
	s = va_arg(args, const char *);
	if (s == NULL)
	{
		s = "(null)";
		// while (s[i] != '\0')
		// {
		// 	(*count)++;
		// 	i++;
		// }
	}
	while (*s)
	{
		print_char(*s++);
		(*count)++;
	}
	return (*count);
}
