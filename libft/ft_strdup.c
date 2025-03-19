#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *dup;
    int size;
    int i;

    i = 0;
    size = 0;
    while (s1[size])
        size++;
    dup = (char *)malloc(sizeof(char) * (size + 1));
    if (dup == NULL)
        return (NULL);
    while (s1[i])
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}