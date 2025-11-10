/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:42:30 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/10 16:09:46 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    int i;
    char *res;
    
    res = (char *) malloc(sizeof(char) * 11);
    i = 0;
    if (n == 0)
    {
        res[0] = 0;    
        res[1] = '\0';
        return (res);
    }
    while (n >= 10)
    {
        res[i] = 48 + (n % 10);
        n = n /10;
        i++;
    }
    res[i] = 48 + n;
    res[i++] = '\0';
    return (res);
}
/*
int main (void)
{
    int a;
    char *resu;
    a = 1484;
    resu = ft_itoa(a);
    printf("%s", resu);
    return (0);
}
*/