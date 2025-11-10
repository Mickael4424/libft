/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:30:16 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/06 16:52:22 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*ptr_dest;
	char	*ptr_src;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	ptr_dest = (char *)dest;
	ptr_src = (char *) src;
	i = 0;
	if (dest > src)
	{
		while (size-- > 0)
		{
			ptr_dest[size] = ptr_src[size];
		}
	}
	else
	{
		while (i < size)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dest);
}
/*
int main(void)
{
    char a[100] = "Learningisfun";
	char *first;
	char *second;
	
	first = a;
	second = a;
	
    printf("before a : %s\n", a);
	ft_memcpy(first + 8, first, 10);
    printf("memcpy a : %s\n", a);
    ft_memmove(second + 8, first, 10);
    printf("ft memmove after a : %s\n", a);
    return (0);   
}
*/
