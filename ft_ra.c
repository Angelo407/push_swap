# include "push_swap.h"

int rotate_a_intermediate(t_array *array, t_garbages *rai)
{
    if (array->size_a <= 1)
        return (0);
    check_malloc_a_temp(array, rai);
    rai->i = 0;
    rai->j = 1;
    rai->k[0] = array->a[0];
    while (rai->i < array->size_a + 1)
    {
        rai->a_temp[rai->i++] = array->a[rai->j++];
        if (rai->i == array->size_a)
            rai->a_temp[array->size_a - 1] = rai->k[0];
    }
    rai->i = 0;
    rai->j = 0;
    while (rai->i < array->size_a)
        array->a[rai->i++] = rai->a_temp[rai->j++];
    free(rai->a_temp);
    return (1);
}

int rotate_a(t_array *array, t_garbages *rai)
{
    if (rotate_a_intermediate(array, rai) == 1)
       write(1, "ra\n", 3);
    return (0);
}
