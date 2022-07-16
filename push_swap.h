#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct array {
    int *int_array;
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
int     swap_a_intermediate(t_array *array);
int     swap_b(t_array *array);
int     swap_b_intermediate(t_array *array);
int     ss(t_array *array);
int     push_a(t_array *array, t_garbages *garbages);
int     push_b(t_array *array, t_garbages *garbages);
// int  push_b_intermediate(t_array *array, t_garbages *pbi);
int     rotate_a(t_array *array, t_garbages *garbages);
int     rotate_a_intermediate(t_array *array, t_garbages *garbages);
int     rotate_b(t_array *array, t_garbages *garbages);
int     rotate_b_intermediate(t_array *array, t_garbages *garbages);
int     rr(t_array *array, t_garbages *garbages);
int     reverse_rotate_a(t_array *array, t_garbages *garbages);
int     reverse_rotate_a_intermediate(t_array *array, t_garbages *garbages);
int     reverse_rotate_b(t_array *array, t_garbages *garbages);
int     reverse_rotate_b_intermediate(t_array *array, t_garbages *garbages);
int     rrr(t_array *array, t_garbages *garbages);
void    *check_malloc_array(t_array *array);
void    *check_malloc_int_array(t_array *array);
void    *check_malloc_a(t_array *array);
void    *check_malloc_b(t_array *array);
void    *check_malloc_a_temp(t_array *array, t_garbages *garbages);
void    *check_malloc_b_temp(t_array *array, t_garbages *garbages);
int     free_malloc_a_temp(t_array *array, t_garbages *garbages);
int     free_malloc_b_temp(t_array *array, t_garbages *garbages);
int     free_malloc_last(t_array *array);
int     test(t_array *array, t_garbages *garbages);
int     ft_nbr_already_sorted(t_array *array);







#endif


