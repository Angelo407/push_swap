# include "push_swap.h"

int rotate_b(t_array *array)
{
    int b_temp[array->size_b];
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
//    printf("k = %d\n", *k);

    while (i < array->size_b + 1)
    {
        b_temp[i] = array->b[j];
//       printf("1. b_temp[i] = %d | array->b[j] = %d | array->size_b = %d | i = %d | j = %d\n", b_temp[i], array->b[j], array->size_b, i, j);
        i++;
        j++;
//        printf("i = %d | j = %d\n", i, j);
        // printf("2. b_temp[i] = %d | array->b[j] = %d | array->size_b = %d | i = %d | j = %d\n", b_temp[i], array->b[j], array->size_b, i, j);

        if (i == array->size_b)
        {
            b_temp[array->size_b - 1] = k[0];
//            printf("2. b_temp[i] = %d | array->size_b = %d | i = %d | j = %d\n", b_temp[i], array->size_b, i, j);
        }
    }
       i = 0;
       j = 0;
        while (i < array->size_b)
            array->b[i++] = b_temp[j++];

    printf("RESULTAT rotate_b : %d %d %d %d %d %d %d\n", b_temp[0], b_temp[1], b_temp[2], b_temp[3], b_temp[4], b_temp[5], b_temp[6]);

    write(1, "rb\n", 3);

    return (0);
}