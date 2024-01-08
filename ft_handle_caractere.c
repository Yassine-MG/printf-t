/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_caractere.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:59:55 by ymghazli          #+#    #+#             */
/*   Updated: 2024/01/06 14:17:43 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "libftprintf.h"
#include <stdarg.h>
#include <unistd.h>

void	handle_character(va_list args)
{
	char	ch;

	ch = va_arg(args, int);
	print_char(ch);
}
