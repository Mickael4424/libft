/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:45:56 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/13 17:42:41 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s_res;

	if (!s || !f)
		return (NULL);
	s_res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s_res)
	{
		return (NULL);
	}
	i = 0;
	while (i < ft_strlen(s))
	{
		s_res[i] = (*f)(i, s[i]);
		i++;
	}
	s_res[i] = 0;
	return (s_res);
}
/*
int main (void)
{
    char a[] = "Hello world";
    return (0);
}
*/
