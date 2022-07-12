# include "push_swap.h"

int rotate_a(t_array *array)
{
    int a_temp[array->size_a]; // pas possible, dixit Emmanuel
    int i;
    int j;
    int *k;

    k = malloc(sizeof(int) * 1);
    if (!k)
    {
        printf("Le malloc de k a échoué !\n");
        return (0);
    }
    i = 0;
    j = 1;
    k[0] = array->a[0];
    while (i < array->size_a + 1)
    {
        a_temp[i++] = array->a[j++];
        if (i == array->size_a)
            a_temp[array->size_a - 1] = k[0];
    }
       i = 0;
       j = 0;
        while (i < array->size_a)
            array->a[i++] = a_temp[j++];
    write(1, "ra\n", 3);
    return (0);
}
