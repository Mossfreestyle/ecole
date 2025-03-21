#include "libft.h"

int ft_counttab(char **tab)
{
    int i;

    i = 0;
    while(tab[i])
        i++;
    return (i);
}
