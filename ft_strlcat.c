/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:10:42 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/10 10:58:52 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int		src_len;	
	unsigned int		dst_len;

	src_len = 0;
	dst_len = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
	{
		return (dst_len + src_len);
	}
	if (src_len < (size - dst_len))
	{
		ft_memcpy(dst + dst_len, src, src_len + 1);
	}
	else
	{
		ft_memcpy(dst + dst_len, src, size - dst_len - 1);
		dst[size - 1] = '\0';
	}
	return (dst_len + src_len);
}
/*
int main(void)
{
    char d[] = "Hello world";
    char s[] = "Viva la viaa";
    printf("before d : %s, s %s \n", d, s);
    printf("result : %zu\n", strlcat(d, s, 21));
    printf("after d : %s, s %s \n", d, s);
    return (0);
}
*/
