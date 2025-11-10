/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:19:02 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/10 10:58:48 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	size_src;

	size_src = ft_strlen(src);
	if (size_src + 1 < size)
	{
		ft_memcpy(dst, src, size_src + 1);
	}
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (size_src);
}
/*
int main(void)
{
    char a[] = "Hello";
    char b[] = "Viva la viaa";
    printf("ft_strlcpy %zu\n", ft_strlcpy(b, a, 8));
	printf("after dst : %s, src %s \n", b, a);
	
	char aa[] = "Hello";
    char bb[] = "Viva la viaa";
	printf("strlcpy %zu\n", strlcpy(bb, aa, 8));
    printf("after dst : %s, src %s \n", bb, aa);
	
    return (0);
}
*/
