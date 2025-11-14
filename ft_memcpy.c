/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:15:47 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/12 18:18:12 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char		*ptr_dest;
	unsigned char		*ptr_src;

	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	ptr_dest = (unsigned char *) dest;
	ptr_src = (unsigned char *) src;
	while (size > 0)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		size--;
	}
	return (dest);
}
/*
int main(void)
{
    char d[] = "hello";
    const char c[] = "Nice";
    printf("c: %s d: %s", c, d);
    ft_memcpy(&d, &c, sizeof(c));
    printf("c: %s d: %s", c, d);
    memcpy(&d, &c, sizeof(c));
    printf("c: %s d: %s", c, d);
}
*/