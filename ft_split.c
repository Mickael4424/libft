/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 08:34:52 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/14 15:47:19 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c, int total_len)
{
	int	i;
	int	word;

	i = 0;
	word = 1;
	if (s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			i++;
			if (s[i] != c)
				word++;
		}
		i++;
	}
	if (s[0] == c)
		word--;
	if (s[total_len - 1] == c)
		word--;
	return (word);
}

void	fill_word(const char *s, char *word, int beg, int end)
{
	int	i;

	i = 0;
	while (beg < end)
	{
		word[i] = s[beg];
		beg++;
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	int		total_word;
	char	**str;
	int		i;
	int		k;
	int		beg;
	int		end;	

	if (!s)
		return (NULL);
	total_word = word_count(s, c, ft_strlen(s));
	str = ft_calloc((total_word) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	if (!s || s[0] == '\0')
	{
		str[total_word] = NULL;
		return (str);
	}
	i = 0;
	k = 0;
	while (i <= (int) ft_strlen(s))
	{
		beg = 0;
		end = 0;
		while (s[i] == c)
		{
			i++;
			if (s[i] == '\0')
				return (str);
		}
		if (s[i] != c)
			beg = i;
		while (s[i] != c)
		{
			i++;
			if (s[i] == '\0')
			{
				end = i;
				break ;
			}
		}
		if (s[i] == c)
			end = i;
		str[k] = ft_calloc(end - beg + 1, sizeof(char));
		if (!str[k])
			return (0);
		fill_word(s, str[k], beg, end);
		i++;
		k++;
	}
	str[total_word] = NULL;
	return (str);
}
/*
int main (void)
{
    char a[] = "";
    char b = ' ';
 	char **res;
 	int i;
	
 	i = 0;
    res = ft_split(a, b);
	while (res[i])
	{
 		printf("%s\n", res[i]);
 		i++;
 	}
 	return (0);
}
*/
