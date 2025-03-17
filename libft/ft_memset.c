#include "libft.h";

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned int    i;
    unsigned char   *str;

    i = 0;
    str = (unsigned char *)b;
    while (i < len)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    b = (void *)str;
    return (b);

    