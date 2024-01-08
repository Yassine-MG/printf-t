/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:43:26 by yassine           #+#    #+#             */
/*   Updated: 2023/12/13 14:05:17 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
		write(fd, "\n", 1);
	}
}

// // protect
// int main(){
// 	// char a[] = "NULL";
// 	// char b[] = "NUxx";
// 	// printf("%s\n", );
// 	// printf("%s", memmove(NULL,b,9));
// 	ft_putendl_fd("NULL",0);
// }