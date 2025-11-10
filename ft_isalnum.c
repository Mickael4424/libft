/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:48:36 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/06 13:09:01 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
/*
int main (void)
{
    char a = 'z';
    printf("%d", ft_isalnum(a));
    printf("\n");
    printf("%d", isalnum(a));
    return (0);    
}
*/
