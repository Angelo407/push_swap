# include "push_swap.h"


int push_b(t_array *array)
{
    int i;
    int j;
    int *a_temp;
    int *b_temp;
    int k[1];
    if (array->size_a == 0)
    {
        printf("Le tableau a est vide !\n");
        return (0);
    }
    a_temp = malloc(sizeof(int) * array->size_a);
    if (!a_temp)
    {
        printf("Le malloc a_temp a échoué !\n");
        return (0);
    }
    b_temp = malloc(sizeof(int) * array->size_b);
    if (!b_temp)
    {
        printf("Le malloc b_temp a échoué !\n");
        return (0);
    }
    k[0] = array->a[0];
    printf("k[0] = %d\n", k[0]);
    i = 0;
    j = 1;
    while (i < array->size_a)
        a_temp[i++] = array->a[j++];
    array->size_a = array->size_a - 1;
    array->a = a_temp;

// MNT ON S'OCCUPE DE TABLEAU B
    array->size_b = array->size_b + 1;
    if (array->size_b == 1)
        b_temp[0] = k[0];
    if (array->size_b > 1)
    {
        i = 1;
        j = 0;
        b_temp[0] = k[0];
        while (i < array->size_b)
            b_temp[i++] = array->b[j++];
    }
    array->b = b_temp;

    // printf("a_temp[idx] = %d %d %d %d %d %d %d | array->size_a = %d\n", a_temp[0], a_temp[1], a_temp[2], a_temp[3], a_temp[4], a_temp[5], a_temp[6], array->size_a);
    printf("b_temp[idx] = %d %d %d %d %d %d %d | array->size_b = %d\n", b_temp[0], b_temp[1], b_temp[2], b_temp[3], b_temp[4], b_temp[5], b_temp[6], array->size_b);
    write(1, "pb\n", 3);
    return (0);
}
