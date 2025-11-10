/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:12:00 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/07 11:20:16 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t			i;
	unsigned char	*sstr;
	unsigned char	cc;

	i = 0;
	sstr = (unsigned char *) str;
	cc = (unsigned char) c;
	while (i < size)
	{
		if (sstr[i] == cc)
			return ((void *) sstr + i);
		i++;
	}
	return (NULL);
}
/*
int main (void)
{
    char abc[] = "hello world";
    char *res_ftmemchr = (char *) ft_memchr(abc, 'o', 2);
    printf("%s\n", res_ftmemchr);
    char *res_memchr = (char *) memchr(abc, 'o', 2);
    printf("%s\n", res_memchr);
    return (0);
}
*/
