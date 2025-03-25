#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*new;
	int		i;
	int		len;

	if (!lst || !f || !del)
		return (0);
	i = 0;
	len = ft_lstsize(lst);
	newlist = NULL;
	while (i < len)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, new);
		lst = lst->next;
		i++;
	}
	return (newlist);
}

/*void *to_uppercase(void *content)
{
    char *str = (char *)content;
    char *new_str = strdup(str);
    if (!new_str)
        return NULL;
    for (int i = 0; new_str[i]; i++)
        if (new_str[i] >= 'a' && new_str[i] <= 'z')
            new_str[i] -= 32;
    return new_str;
}

void del_content(void *content)
{
    free(content);
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    t_list *list = ft_lstnew(strdup("hello"));
    ft_lstadd_back(&list, ft_lstnew(strdup("world")));
    ft_lstadd_back(&list, ft_lstnew(strdup("libft")));

    printf("Liste originale :\n");
    print_list(list);

    t_list *mapped_list = ft_lstmap(list, to_uppercase, del_content);

    printf("\nListe après ft_lstmap :\n");
    print_list(mapped_list);

    ft_lstclear(&list, del_content);
    ft_lstclear(&mapped_list, del_content);

    return (0);
	gcc -Wall -Wextra -Werror ft_lstmap.c ft_lstnew.c ft_lstadd_back.c ft_lstclear.c -o test && ./test
}*/
