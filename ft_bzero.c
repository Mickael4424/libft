/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 08:28:46 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/06 15:29:14 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*str, size_t	n)
{
	char	*str_cpy;

	str_cpy = (char *) str;
	while (n > 0)
	{
		*str_cpy = 0;
		str_cpy ++;
		n--;
	}
}
/*
int    main(void)
{
    char    abc[10] = {65, 65, 65, 65};
    ft_bzero(abc, 10);
    int     i;
    i = 0;
    while (abc[i] != '\0')
    {
        printf("%d\n", abc[i]);
        i++;
    }
    char def[10] = {66, 66, 66, 66, 66};
    bzero(def, 10);
    i = 0;
    while (def[i] != '\0')
    {
    printf("%d\n", def[i]);
    i++;
    }
    return (0);
}
*/
