/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:52:38 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/07 12:03:45 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	i = 0;
	cc = (char) c;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == cc)
		{
			return ((char *)s + i);
		}
		i++;
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
    int c = 'o';
    printf("%s\n", ft_strchr(a, c));
	printf("%s\n", strchr(a, c));
    return (0);
}
*/
