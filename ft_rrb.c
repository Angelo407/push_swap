# include "push_swap.h"

int reverse_rotate_b(t_array *array)
{
    int i;
    int j;
    int *b_temp;
    int k[1];

    b_temp = malloc(sizeof(int) * array->size_b);
    if (!b_temp)
    {
        printf("Le malloc de b_temp a échoué !\n");
        return (0);
    }
    i = 1;
    j = 0;
    k[0] = array->b[array->size_b - 1];    
    while (i < array->size_b)
        b_temp[i++] = array->b[j++];
    b_temp[0] = k[0];
    array->b = b_temp;
    write(1, "rrb\n", 4);
    return (0);
}
