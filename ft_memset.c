/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:19:09 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/06 15:18:23 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int n, size_t size)
{
	unsigned char	*str_cpy;
	int				i;

	i = 0;
	str_cpy = 0;
	str_cpy = (unsigned char *)str;
	while (size > 0)
	{
		str_cpy[i] = (unsigned char)n;
		i++;
		size--;
	}
	return (str);
}
/*
int main(void)
{
    int i;
    i = 0;
    
    char abc[] = {1, 2, 3, 4, 5};
    ft_memset(abc, 'a', 1);
    while (abc[i] != '\0')
    {
        printf("%d", abc[i]);
        printf("\n");
        i++;
    }
    
    i = 0;
    char def[] = {1, 2, 3, 4, 5};
    memset(def, 'a', 1);
    while (def[i] != '\0')
    {
        printf("%d", def[i]);
        printf("\n");
        i++;
    }
    
    return (0);
}
*/
