/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:39:12 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/10 10:58:39 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j])
			{
				j++;
			}
			if (little[j] == '\0')
			{
				return ((char *) big + i);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char *b = "Bab bar biot";
    char *s = "bara";
    printf("%s\n", (char *)ft_strnstr(b, s, 10));
    printf("%s\n", (char *)strnstr(b, s, 10));
    return (0);
}
*/
