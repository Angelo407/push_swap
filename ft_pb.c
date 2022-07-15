# include "push_swap.h"

static int  free_malloc_b_temp(t_array *array, t_garbages *pbi)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < array->size_b)
        array->b[i++] = pbi->b_temp[j++];
    free(pbi->b_temp);
    return (0);
}

static int  free_malloc_a_temp(t_array *array, t_garbages *pbi)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < array->size_a)
        array->a[i++] = pbi->a_temp[j++];
    free(pbi->a_temp);
    return (0);
}

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
    free_malloc_b_temp(array, pbi);
    return (1);
}

int push_b(t_array *array, t_garbages *pbi)
{
    if (push_b_intermediate(array, pbi) == 1)
       write(1, "pb\n", 3);
    return (0);
}
