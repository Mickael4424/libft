/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:06:47 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/10 16:07:38 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strtrim_beg(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0' && set[j] != '\0')
	{
		j = 0;
		while (s1[i] != '\0' && set[j] != '\0' && s1[i] != set[j])
		{
			j++;
		}
		if (s1[i] != set[j])
		{
			return (i);
		}
		i++;
	}
	return (0); 
}

int ft_strtrim_end(char const *s1, char const *set)
{
	int	imax;
	int	jmax;

	imax = ft_strlen(s1) - 1;
	jmax = ft_strlen(set) - 1;
	while (imax >= 0 && jmax >= 0)
	{
		jmax = ft_strlen(set) - 1;
		while (imax >= 0 && jmax >= 0 && s1[imax] != set[jmax])
		{
			jmax--;
		}
		if (s1[imax] != set[jmax])
		{
			return (imax);
		}
		imax--;
	}
	return (0);   
}

char *ft_strtrim(char const *s1, char const *set)
{
	int     beg;
	int     end;
	int     len;
	int     i;
	char    *strim;
	
	i = 0;
	beg = ft_strtrim_beg(s1, set);
	end = ft_strtrim_end(s1, set);
	len = end - beg;
	strim = (char *) ft_calloc((end - beg), sizeof(char));
	if (!strim)
		return (NULL);
	while (i <= len)
	{
		strim[i] = s1[beg];
		i++;
		beg++;
	}
	strim [i] = '\0';
	return (strim);
}
/*
int main(void)
{
	char string[] = "xxx  hellox worldxx xx";
	char chara[] = " xhe";
	printf("%s", ft_strtrim(string, chara));
	return (0);   
}
*/
