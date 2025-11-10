/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyer <mbouyer@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:51:01 by mbouyer           #+#    #+#             */
/*   Updated: 2025/11/10 14:25:11 by mbouyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

/*
int main (void)
{
    char a = 'a';
    int fd;
    ft_putchar_fd(a, fd);
    return (0);
}
*/