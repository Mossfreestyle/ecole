#include "libft.h"

char    *ft_strcat(char *s1, const char *s2)
{
    int i;
    int j;
    char    *result;

    i = 0;
    j = 0;
    result = s1;
    while (s1[i])
        i++;
    while (s2[i])
    {
        result[i] = s2[i];
        i++;
        j++;
    }
    result[i] = '\0';
    return (result);
}