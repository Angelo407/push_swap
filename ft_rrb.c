# include "push_swap.h"

int reverse_rotate_b_intermediate(t_array *array, t_garbages *rrbi)
{    
    check_malloc_b_temp(array, rrbi);
    rrbi->i = 1;
    rrbi->j = 0;
    rrbi->k[0] = array->b[array->size_b - 1];    
    while (rrbi->i < array->size_b)
        rrbi->b_temp[rrbi->i++] = array->b[rrbi->j++];
    rrbi->b_temp[0] = rrbi->k[0];
    array->b = rrbi->b_temp;
    return (1);
}

int reverse_rotate_b(t_array *array, t_garbages *rrbi)
{
    if (reverse_rotate_b_intermediate(array, rrbi) == 1)
       write(1, "rrb\n", 4);
    return (0);
}
