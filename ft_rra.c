# include "push_swap.h"

int reverse_rotate_a_intermediate(t_array *array, t_garbages *rrai)
{
    check_malloc_a_temp(array, rrai);
    rrai->i = 1;
    rrai->j = 0;
    rrai->k[0] = array->a[array->size_a - 1];
    while (rrai->i < array->size_a)
        rrai->a_temp[rrai->i++] = array->a[rrai->j++];
    rrai->a_temp[0] = rrai->k[0];
    array->a = rrai->a_temp;
    free(rrai->a_temp);
    
    return (1);
}

int reverse_rotate_a(t_array *array, t_garbages *rrai)
{
    if (reverse_rotate_a_intermediate(array, rrai) == 1)
    {
        write(1, "rra\n", 4);

    }
    
    // int *z;
    // z = malloc(array->size_a);
    // z = array->a;
    // printf("RESULTAT : z[idx] = %d %d %d %d %d %d %d %d %d | array->size_a = %d\n", z[0], z[1], z[2], z[3], z[4], z[5], z[6], z[7], z[8], array->size_a);
    // printf("RESULTAT : array->a[idx] = %d %d %d %d %d %d %d %d %d | array->size_a = %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4], array->a[5], array->a[6], array->a[7], array->a[8], array->size_a);

    // free(array->a);

    // array->a = z;

    return (0);
}
