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
//int     ft_size_array_int(int *array);
//int     *array_atoi(int argc, char **argv);
//int     *swap_a(int argc, int *a);
//int     *swap_b(int argc, int *b);

//int     push_b(t_array *a, t_array *b);
int     push_b(t_array *array);
int     push_a(t_array *array);

//int     push_b1(t_array *a);
int     push_b1(void);


#endif


