# include "push_swap.h"

int push_b(t_array *array)
{
    int i;
    int j;
    int *a_temp;
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
    k[0] = array->a[0];
    printf("k[0] = %d\n", k[0]);
    i = 0;
    j = 1;
    while (i < array->size_a)
        a_temp[i++] = array->a[j++];
    array->size_a = array->size_a - 1;
    array->a = a_temp;

// MNT S'OCCUPER DU TABLEAU B :
//    array->size_b = array->size_b + 1;



    printf("a_temp[idx] = %d %d %d %d %d %d %d | array->size_a = %d\n", a_temp[0], a_temp[1], a_temp[2], a_temp[3], a_temp[4], a_temp[5], a_temp[6], array->size_a);
    
    write(1, "pb\n", 3);
    return (0);
}
