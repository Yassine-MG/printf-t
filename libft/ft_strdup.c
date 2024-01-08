/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:43:53 by yassine           #+#    #+#             */
/*   Updated: 2023/12/13 14:08:37 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (s[length])
	{
		length++;
	}
	str = malloc(length + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

//test
// #include<string.h>
// int main(){
// 	char *p = NULL;
// 	printf("%s\n", ft_strdup(p));
// 	printf("%s", strdup(p));
// }