/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:47:50 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/10 12:42:27 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned i;
    
    while (s[i] != '\0')
    {   
        (*f)(i, &s[i]);
        i++;
    }
    s[i] = '\0';
}
/*
int main (void)
{
    return (0);
}
*/