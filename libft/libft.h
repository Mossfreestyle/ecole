#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# define BUFF_SIZE 1

typedef struct		s_list
{
    void			*content;
    size_t			content_size;
    struct s_list	*next;
}					t_list;

int ft_atoi(const char *str);
int ft_isalpha(int c);
void    *ft_memset(void *b, int c, size_t len);
void    ft_putstr(char *str);
void    ft_putnbr(int n);
void    ft_putchar(char c);
#endif 