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
int ft_strcmp(const char *s1, const char *s2);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
char    *ft_strcat(char *s1, const char *s2);
int ft_sqrt(int nb);
char    *ft_strcpy(char *dst, const char *src);
char    *ft_strrev(char *str);
void    ft_swap(int *a, int *b);
char    *ft_strdup(const char *s1);
int tab_count(char **tab);
int ft_power(int nb, int power);
size_t  ft_strlen(const char *s);
char    *ft_strstr(const char *haystack, const char *needle);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strncpy(char *dst, const char *src, size_t len);
char    *ft_strncat(char *s1, const char *s2, size_t n);
int ft_isprint(int c);
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char const *s, int fd);
void	*ft_memcpy(void *dest, const void *src, size_t len)
#endif
