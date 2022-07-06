#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct array {
    int *a;
    int *b;
    int *array;
}   t_array;


int     ft_atoi(const char *str);
void	*ft_calloc(size_t element_number, size_t element_size);
int     ft_size_array_int(int *array);
int     *numbers_array(int argc, char **argv);
int     *swap_a(int argc, int *a);
int     *swap_b(int argc, int *b);
int     push_b(t_array *a, t_array *b);
int     ft_check_empty_array(t_array *array);
int     ft_check_empty_array_a(t_array *a);
int     ft_check_empty_array_b(t_array *b);







#endif


