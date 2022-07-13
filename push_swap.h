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
    int size_tab_max;
    int *array;
}   t_array;

typedef struct garbages {
    int *a_temp;
    int *b_temp;
    int i;
    int j;
    int k[1];
}   t_garbages;


int     ft_atoi(const char *str);
//int     *array_atoi(int argc, char **argv);
int     ft_check_empty_array_a(t_array *array);
int     ft_check_empty_array_b(t_array *array);
int     swap_a(t_array *array);
int     swap_b(t_array *array);
int     ss(t_array *array);
int     push_b(t_array *array);
int     push_a(t_array *array);
int     rotate_a(t_array *array);
int     rotate_b(t_array *array);
int     reverse_rotate_a(t_array *array);
int     reverse_rotate_b(t_array *array);

void  print_rrb(void);
int     test(t_array *array, t_garbages *garbages);
void    *check_malloc_a_temp(t_array *array, t_garbages *garbages);
void    *check_malloc_b_temp(t_array *array, t_garbages *garbages);







#endif


