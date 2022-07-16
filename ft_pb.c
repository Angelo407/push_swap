# include "push_swap.h"

static int  push_b_intermediate(t_array *array, t_garbages *pbi)
{
    ft_check_empty_array_a(array);
    check_malloc_a_temp(array, pbi);
    check_malloc_b_temp(array, pbi);
    pbi->k[0] = array->a[0];
    pbi->i = 0;
    pbi->j = 1;
    while (pbi->i < array->size_a)
        pbi->a_temp[pbi->i++] = array->a[pbi->j++];
    array->size_a = array->size_a - 1;
    free_malloc_a_temp(array, pbi);
    array->size_b = array->size_b + 1;
    if (array->size_b == 1)
        pbi->b_temp[0] = pbi->k[0];
    if (array->size_b > 1)
    {
        pbi->i = 1;
        pbi->j = 0;
        pbi->b_temp[0] = pbi->k[0];
        while (pbi->i < array->size_b)
            pbi->b_temp[pbi->i++] = array->b[pbi->j++];
    }
    pbi->i = 0;
    pbi->j = 0;
    while (pbi->i < array->size_b)
    {
        array->b[pbi->i++] = pbi->b_temp[pbi->j++];
//        printf("array->b[pbi->i] = %d\n", array->b[pbi->i]);
    }
    free(pbi->b_temp);
    return (1);
}

int push_b(t_array *array, t_garbages *pbi)
{
    if (push_b_intermediate(array, pbi) == 1)
       write(1, "pb\n", 3);
    return (0);
}
