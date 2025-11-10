/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 08:54:27 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/10 16:07:25 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (!s)
		return (NULL);
		
	if (start > ft_strlen(s))
		return (ft_strdup(" "));
		
	if (len > start + ft_strlen(s))
		len = ft_strlen(s + start);
	
	substr = ft_calloc((len + 1), sizeof(char));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}
/*
int	main (void)
{
	char    a[] = "Hello world";
	printf("%s", ft_substr(a, 2, 6));
	return (0);
}
*/
