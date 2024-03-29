/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_state_zero.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:00:07 by ymghazli          #+#    #+#             */
/*   Updated: 2024/01/11 18:53:05 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft/libft.h"
#include "ft_printf.h"
#include <unistd.h>

void	handle_state_zero(const char fmt_char, int *state, int *count)
{
	if (fmt_char == '%')
	{
		*state = 1;
	}
	else
	{
		print_char(fmt_char);
		(*count)++;
	}
}
