#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct array {
    int *a;
    int size_a;
    int *b;
    int size_b;
    int *array;
}   t_array;


int     ft_atoi(const char *str);
//int     *array_atoi(int argc, char **argv);
int     swap_a(t_array *array);
int     swap_b(t_array *array);
int     ss(t_array *array);
int     push_b(t_array *array);
int     push_a(t_array *array);
int     rotate_a(t_array *array);
int     rotate_b(t_array *array);


#endif


