/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:06:47 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/13 18:08:41 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strtrim_beg(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	while (s1[i] != '\0')
	{
		check = 1;
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				check = 0;
				break ;
			}
			j++;
		}
		if (check == 1)
			return (i);
		i++;
	}
	return (i);
}

int	ft_strtrim_end(char const *s1, char const *set)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*strim;

	if (!s1)
		return (NULL);
	if (s1[0] == 0)
		return (ft_calloc(1, 1));
	if (!set || set[0] == 0)
		return (ft_strdup(s1));
	beg = ft_strtrim_beg(s1, set);
	end = ft_strtrim_end(s1, set);
	if ((beg > end) || (end > ft_strlen(s1)))
		return ((char *)ft_calloc(1, 1));
	len = end - beg + 1;
	strim = malloc((len + 1) * sizeof(char));
	if (!strim)
		return (NULL);
	i = 0;
	while (i < len)
		strim[i++] = s1[beg++];
	strim [i] = '\0';
	return (strim);
}
/*
int main(void)
{
	char string[] = "JOSID";
	char chara[] = "ss";
	printf("%s", ft_strtrim(NULL, NULL));
	return (0);   
}
*/
