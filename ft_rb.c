# include "push_swap.h"

int rotate_b_intermediate(t_array *array, t_garbages *rbi)
{    
    check_malloc_b_temp(array, rbi);
    rbi->i = 0;
    rbi->j = 1;
    rbi->k[0] = array->b[0];
    while (rbi->i < array->size_b + 1)
    {
        rbi->b_temp[rbi->i++] = array->b[rbi->j++];
        if (rbi->i == array->size_b)
            rbi->b_temp[array->size_b - 1] = rbi->k[0];
    }
       rbi->i = 0;
       rbi->j = 0;
        while (rbi->i < array->size_b)
            array->b[rbi->i++] = rbi->b_temp[rbi->j++];
    return (1);
}

int rotate_b(t_array *array, t_garbages *rbi)
{
    if (rotate_b_intermediate(array, rbi) == 1)
       write(1, "rb\n", 3);
    return (0);
}
