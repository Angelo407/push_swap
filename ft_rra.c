# include "push_swap.h"

int reverse_rotate_a_intermediate(t_array *array, t_garbages *rrai)
{
    if (array->size_a <= 1)
        return (0);
    check_malloc_a_temp(array, rrai);
    rrai->i = 1;
    rrai->j = 0;
    rrai->k[0] = array->a[array->size_a - 1];
    while (rrai->i < array->size_a)
        rrai->a_temp[rrai->i++] = array->a[rrai->j++];
    rrai->a_temp[0] = rrai->k[0];
    rrai->i = 0;
    rrai->j = 0;
    while (rrai->i < array->size_a)
        array->a[rrai->i++] = rrai->a_temp[rrai->j++];
    free(rrai->a_temp);
    return (1);
}

int reverse_rotate_a(t_array *array, t_garbages *rrai)
{
    if (reverse_rotate_a_intermediate(array, rrai) == 1)
        write(1, "rra\n", 4);
    return (0);
}
