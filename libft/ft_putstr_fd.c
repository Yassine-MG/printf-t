/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:43:35 by yassine           #+#    #+#             */
/*   Updated: 2023/12/13 14:06:04 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
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
	}
}
// protect

// int main(){
// 	// char a[] = "NULL";
// 	// char b[] = "NUxx";
// 	// printf("%s\n", );
// 	// printf("%s", memmove(NULL,b,9));
// 	ft_putstr_fd("NULL",0);
// }
