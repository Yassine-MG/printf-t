/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:43:58 by yassine           #+#    #+#             */
/*   Updated: 2023/12/13 14:13:34 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (*s)
		{
			f(i, s);
			i++;
			s++;
		}
	}
}

// #include<stdio.h>

// void addOne(int i, char *a){
// 	*a -= 32;
// }

// int main(){
// 	char a[] = "hello";
// 	ft_striteri(a, NULL);
// 	printf("%s\n",a);
// }