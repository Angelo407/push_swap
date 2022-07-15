# include "push_swap.h"

int  free_malloc_a_temp(t_array *array, t_garbages *pbi)
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

int  free_malloc_b_temp(t_array *array, t_garbages *pbi)
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
