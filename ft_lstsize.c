/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickael <mickael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:01:03 by mickael           #+#    #+#             */
/*   Updated: 2025/11/11 13:19:52 by mickael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;
    t_list *new;

    count = 0;
    new = lst;
    while (new)
    {
        new  = new->next;   
        count++;
    }
    return (count);
}

int main (void)
{

    return (0);
}