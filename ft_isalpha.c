/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:30:06 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/06 12:35:51 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
/*
int main(void)
{
    printf("%d", ft_isalpha(97));
    printf("\n");
    printf("%d", isalpha(97));
    return (0);
}
*/
