/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:52:38 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/13 17:33:29 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	i = 0;
	cc = (char) c;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == cc)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (s[i] == cc)
	{
		return ((char *) &s[i]);
	}
	return (NULL);
}
/*
int main(void)
{
    char a[] = "Hello world";
    int c = 'o';
    printf("%s\n", ft_strchr(a, 0));
	printf("%s\n", strchr(a, 0));
    return (0);
}
*/
