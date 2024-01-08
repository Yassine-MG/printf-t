/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:44:07 by yassine           #+#    #+#             */
/*   Updated: 2023/12/13 22:14:43 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i] != '\0' && i < size)
	{
		dest_len++;
		i++;
	}
	src_len = ft_strlen(src);
	i = 0;
	while (i < src_len && dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len < size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// #include<string.h>
// // #include <.h>
// int main(){
// 	char *p = NULL;
// 	char *o = NULL;

// 	printf("%s\n", strlcat(p, o, 5));
// 	// printf("%s", strchr(p, 'i'));
// }
