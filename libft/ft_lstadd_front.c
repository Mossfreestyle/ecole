#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return;
	new->next = *lst;
	*lst = new;
}

/*int main()
{
    t_list *head = ft_lstnew("A");
    t_list *new1 = ft_lstnew("X");

    printf("Avant : %s\n", (char *)head->content);

    ft_lstadd_front(&head, new1);

    printf("Après : %s\n", (char *)head->content);

    return 0;
}*/
