/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 08:34:52 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/10 15:21:52 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int word_count(char const *s, char c)
{
    int i;
    int count;
    
    i = 0;
    count = 0;
    if (s[i])
        count++;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            count++;
        i++;
    }
    return (count);
}
/*
char *fill_word(char const *s_result, in co, char const *s, char c)
{
      
}
*/
char **ft_split(char const *s, char c)
{
    int len;
    int count;
    char **s_res;
    
    len = 17;
    printf("len_s = %d", len);
    
    count = word_count(s, c);
    printf("word cound %d", count);
    
    s_res = ft_calloc(count + 1, sizeof(char *));
    if (!s_res)
        return (NULL);
    /*
    while (i < count)
    {
        s_res[i] = (char *) malloc(sizeof(char *) * len);
        while (s[k] != c)
        {
            s_res[i][j] = s[k];
            j++;
        }
        i++;
        k++;
    }


    while (i < count)
    {
        while (s_res[i][j] != c)
        {
            s_res[i][j] = s[k];
            j++;
            k++;
        }
        i++;
        k++;
    }
 
    i = 0;
    while (i < count)
    {
        printf("s_res %d : %s\n", i, s_res[j]);
        j++;
    }
*/
    return (s_res);
}

int main (void)
{
    char str[] = "lacviecestcbelle";
    char ca = 'c';
    ft_split(str, ca);
    return (0);
}