# include "push_swap.h"


static int  new_ptr_b(int *b_temp, t_array *array)
{
    array->size_b = array->size_b + 1;
    b_temp[array->size_b] = array->b[array->size_b];

    printf("DS FT_NEW_PTR_B : array->size_b = %d\n", array->size_b);
    printf("DS FT_NEW_PTR_B : b_temp[idx] = %d %d %d %d %d %d\n", b_temp[0], b_temp[1], b_temp[2], b_temp[3], b_temp[4], b_temp[5]); // en ajoutant un 0 ça fait un segfault

    return (0);
}

int push_b(t_array *array)
{
    int     i;
    int     j;
    int     *b_temp;

//    ft_check_empty_array_a(a);

//    printf("DS FT_PB.C -> AVANT WHILE : array->size_a = %d\n", array->size_a);

    i = 0;
    j = 1;
    b_temp = malloc(sizeof(int));
    if (!b_temp)
    {
        printf("Le malloc de b_temp a échoué !\n");
        return (0);
    }
    b_temp[0] = array->a[0];
    while (array->size_a > i)
        array->a[i++] = array->a[j++];
    array->size_a = array->size_a - 1;

    printf("DS FT_PB.C : array->a[idx] = %d %d %d %d\n", array->a[0], array->a[1], array->a[2], array->a[3]);
    printf("DS FT_PB.C -> APRES WHILE : array->size_a = %d\n", array->size_a);

    new_ptr_b(b_temp, array);
    write(1, "pb\n", 3);
    return (0);
}
