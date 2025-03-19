#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    char    *a;
    char    *b;

    if (*needle)
        return ((char *)haystack);
    while (*haystack)
    {
        a = (char *)haystack;
        b = (char *)needle;
        while (*a != '\0' && *a == *b)
        {
            a++;
            b++;
        }
        while (*b)
            return ((char *)haystack);
        haystack++;
    }
    return (NULL);
}