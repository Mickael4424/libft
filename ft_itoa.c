/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:42:30 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/13 19:01:18 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	if (n == 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char    *conv_int_min(char *res)
{
    res[0] = '-';
    res[1] = '2';
    res[2] = '1';
    res[3] = '4';
    res[4] = '7';
    res[5] = '4';
    res[6] = '8';
    res[7] = '3';
    res[8] = '6';
    res[9] = '4';
    res[10] = '8';
    res[11] = '\0';
    return (res);
}

char    *ft_itoa_neg(int nb, int i, int len, char *res)
{
    if (nb == -2147483648)
    {
        res = conv_int_min(res);
        return (res);        
    }
    nb *= -1;
	while (i > 0)
	{
		res[i] = 48 + (nb % 10);
		nb = nb / 10;
		i--;
	}
	res[i] = '-';
	res[len] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*res;
	long	nb;

	nb = n;
	len = int_len(nb);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	i = len - 1;
	if (nb < 0)
        return(ft_itoa_neg(nb, i, len, res));
	while (i >= 0)
	{
		res[i] = 48 + (nb % 10);
		nb = nb / 10;
		i--;
	}
	res[len] = '\0';
	return (res);
}
/*
int main (void)
{
    int a;
    char *res;
    a = -123456;
    res = ft_itoa(a);
    printf("%s\n", res);
    return (0);
}
*/
