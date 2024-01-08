/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_intiger.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:00:00 by ymghazli          #+#    #+#             */
/*   Updated: 2024/01/06 14:20:16 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"
#include <stdarg.h>
#include <unistd.h>

void	handle_integer(va_list args)
{
	int	num;

	num = va_arg(args, int);
	ft_putnbr_fd(num, 1);
}
