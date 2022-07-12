# include "push_swap.h"

int reverse_rotate_a(t_array *array)
{
    int i;
    int j;
    int *a_temp;
    int k[1];

    a_temp = malloc(sizeof(int) * array->size_a);
    if (!a_temp)
    {
        printf("Le malloc de a_temp a échoué !\n");
        return (0);
    }
    i = 1;
    j = 0;
    k[0] = array->a[array->size_a - 1];
    while (i < array->size_a)
        a_temp[i++] = array->a[j++];
    a_temp[0] = k[0];
    array->a = a_temp;
    write(1, "rra\n", 4);
    return (0);
}
