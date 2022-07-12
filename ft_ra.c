# include "push_swap.h"

int rotate_a(t_array *array)
{
    int a_temp[array->size_a];
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
//    printf("k = %d\n", *k);

    while (i < array->size_a + 1)
    {
        a_temp[i] = array->a[j];
//       printf("1. a_temp[i] = %d | array->a[j] = %d | array->size_a = %d | i = %d | j = %d\n", a_temp[i], array->a[j], array->size_a, i, j);
        i++;
        j++;

        if (i == array->size_a)
            a_temp[array->size_a - 1] = k[0];
    }
       i = 0;
       j = 0;
        while (i < array->size_a)
            array->a[i++] = a_temp[j++];

    printf("RESULTAT rotate_a : %d %d %d %d %d %d %d\n", a_temp[0], a_temp[1], a_temp[2], a_temp[3], a_temp[4], a_temp[5], a_temp[6]);

    write(1, "ra\n", 3);
    return (0);
}