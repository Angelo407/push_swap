# include "push_swap.h"

static int  push_a_intermediate(t_array *array)
{
    t_garbages  garbages;

    ft_check_empty_array_b(array);
    check_malloc_a_temp(array, &garbages);
    check_malloc_b_temp(array, &garbages);
    garbages.k[0] = array->b[0];
    garbages.i = 0;
    garbages.j = 1;
    while (garbages.i < array->size_b)
        garbages.b_temp[garbages.i++] = array->b[garbages.j++];
    array->size_b = array->size_b - 1;
    array->b = garbages.b_temp;
    array->size_a = array->size_a + 1;
    if (array->size_a == 1)
        garbages.a_temp[0] = garbages.k[0];
    if (array->size_a > 1)
    {
        garbages.i = 1;
        garbages.j = 0;
        garbages.a_temp[0] = garbages.k[0];
        while (garbages.i < array->size_a)
            garbages.a_temp[garbages.i++] = array->a[garbages.j++];
    }
    array->a = garbages.a_temp;
    return (1);
}

int push_a(t_array *array)
{
    if (push_a_intermediate(array) == 1)
       write(1, "pa\n", 3);
    return (0);
}
