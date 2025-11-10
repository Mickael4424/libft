/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:27:42 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/07 12:13:31 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;

	i = 0;
	cc = (char) c;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == cc)
		{
			return ((char *)s + i);
		}
		i--;
	}
	if (cc == '\0')
	{
		return ("\0");
	}
	return (0);
}
/*
int main(void)
{
    char a[] = "Hello world";
    int c = 70;
    printf("%s\n", ft_strrchr(a, c));
	printf("%s\n", strrchr(a, c));  
    return (0);
}
*/
