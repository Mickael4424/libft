/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mickael <mickael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:31:33 by mickael           #+#    #+#             */
/*   Updated: 2025/11/11 10:54:07 by mickael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *str

    str = malloc(sizeof(t_list));
    if (!str)
        return (NULL);
    str->content = content;
    str->next = NULL;
    return (str)
}

int main(void)
{
    void *a = "abcdef";
    printf("a %s", a);
    printf("t_list%s\n", t_list *ft_lstnew (void *content));
    return (0);
}