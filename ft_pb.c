# include "push_swap.h"


int  new_ptr_b(int *b_temp)
{

    printf("DS FT_NEW_PTR_B : *b_temp = %d\n", *b_temp);
    printf("DS FT_NEW_PTR_B : b_temp[idx] = %d %d %d %d %d %d %d\n", b_temp[0], b_temp[1], b_temp[2], b_temp[3], b_temp[4], b_temp[5], b_temp[20000000]); // en ajoutant un 0 ça fait un segfault


    return (0);
}


//int push_b(t_array *a, t_array *b)
//int push_b(t_array *a, t_array size_array_a)
//int push_b(t_array *a)
int push_b(t_array *array)
{
    int     i;
    int     j;
    int     *a_temp;
    int     *b_temp;

//    ft_check_empty_array_a(a);

    printf("FT_PB.C : array->size_a = %d\n", array->size_a);

    i = 0;
    j = 1;
    b_temp = malloc(sizeof(int));
    if (!b_temp)
    {
        printf("Le malloc de b_temp a échoué !\n");
        return (0);
    }
    b_temp[0] = array->a[0];
    printf("DS FT_PB.C : b_temp = %d\n", *b_temp);

    while (array->size_a > i)
        array->a[i++] = array->a[j++];
    array->a[i] = array->a[i - 1];

//    printf("i = %d\n", i);
    printf("DS FT_PB.C : array->a[idx] = %d %d %d %d\n", array->a[0], array->a[1], array->a[2], array->a[3]);
    printf("DS FT_PB.C : b_temp = %d\n", *b_temp);

//    new_ptr_b(b, b_temp);
    new_ptr_b(b_temp);

    write(1, "pb\n", 3);
    return (0);
}
