/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 23:39:45 by marvin            #+#    #+#             */
/*   Updated: 2025/03/25 23:39:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int main(void)
{
    t_list *head;
    t_list *node1;
    t_list *node2;
    t_list *node3;

    node1 = ft_lstnew("Premier");
    node2 = ft_lstnew("Deuxième");
    node3 = ft_lstnew("Troisième");

    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    printf("Taille de la liste : %d\n", ft_lstsize(head));

    return 0;
}*/
