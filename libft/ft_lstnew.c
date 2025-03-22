#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int main()
{
    int valeur = 42;
    t_list *test = ft_lstnew(&valeur);

    if (test)
    {
        printf("Valeur : %d\n", *(int *)(test->content));
        printf("Adresse next : %p\n", (void *)test->next);
        free(test);
    }
    return (0);
}*/
