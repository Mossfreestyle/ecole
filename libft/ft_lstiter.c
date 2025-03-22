#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*int main()
{
    void	to_uppercase(void *content)
    {
        char *str = (char *)content;
        while (*str)
        {
            if (*str >= 'a' && *str <= 'z')
                *str -= 32;
            str++;
        }
    }
    t_list *list = ft_lstnew(strdup("hello"));
    list->next = ft_lstnew(strdup("world"));
    list->next->next = ft_lstnew(strdup("42"));
    printf("Avant ft_lstiter :\n");
    t_list *tmp = list;
    while (tmp)
    {
        printf("- %s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
    ft_lstiter(list, to_uppercase);
    printf("\nAprès ft_lstiter :\n");
    tmp = list;
    while (tmp)
    {
        printf("- %s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
    ft_lstclear(&list, free);
    return 0;
}*/
