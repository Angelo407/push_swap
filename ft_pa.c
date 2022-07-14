# include "push_swap.h"

static int  push_a_intermediate(t_array *array, t_garbages *pai)
{
    ft_check_empty_array_b(array);
    check_malloc_a_temp(array, pai);
    check_malloc_b_temp(array, pai);
    pai->k[0] = array->b[0];
    pai->i = 0;
    pai->j = 1;
    while (pai->i < array->size_b)
        pai->b_temp[pai->i++] = array->b[pai->j++];
    array->size_b = array->size_b - 1;
    array->b = pai->b_temp;
    array->size_a = array->size_a + 1;
    if (array->size_a == 1)
        pai->a_temp[0] = pai->k[0];
    if (array->size_a > 1)
    {
        pai->i = 1;
        pai->j = 0;
        pai->a_temp[0] = pai->k[0];
        while (pai->i < array->size_a)
            pai->a_temp[pai->i++] = array->a[pai->j++];
    }
    array->a = pai->a_temp;
    return (1);
}

int push_a(t_array *array, t_garbages *pai)
{
    if (push_a_intermediate(array, pai) == 1)
       write(1, "pa\n", 3);
    return (0);
}
