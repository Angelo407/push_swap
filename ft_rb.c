# include "push_swap.h"

int rotate_b(t_array *array)
{    
    int b_temp[array->size_b]; // pas possible, dixit Emmanuel
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
    k[0] = array->b[0];
    while (i < array->size_b + 1)
    {
        b_temp[i++] = array->b[j++];
        if (i == array->size_b)
            b_temp[array->size_b - 1] = k[0];
    }
       i = 0;
       j = 0;
        while (i < array->size_b)
            array->b[i++] = b_temp[j++];
    write(1, "rb\n", 3);
    return (0);
}