#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# define BUFF_SIZE 32

typedef struct		s_list
{
    void			*content;
    size_t			content_size;
    struct s_list	*next;
}					t_list;

typedef struct		s_btree
{
    struct s_btree	*left;
    struct s_btree	*right;
    void			*item;
}					t_btree;

typedef struct        s_cell
{
    char            *stock;
    int            prev_fd;
}                   t_cell;


#endif 