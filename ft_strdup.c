/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:33:45 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/13 17:34:11 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		i;
	char		*dup_s;

	dup_s = (char *) malloc(ft_strlen(s) + 1);
	if (!dup_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup_s[i] = s[i];
		i++;
	}
	dup_s[i] = 0;
	return (dup_s);
}
/*
int main (void)
{
    char a[] = "ab";
    printf("ft_strdup %s\n", ft_strdup(a));
    printf("strdup %s\n", strdup(a));
    return (0);
}
*/