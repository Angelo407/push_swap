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
//int push_b1(t_array *a)
int push_b1(void)
{
    int i;
    int j;
    int *a_temp;
    int *b_temp;
    t_array *array;
//    ft_check_empty_array_a(a);

//    printf("FT_PB1.C : a->size_a = %d\n", a->size_a);
    printf("FT_PB1.C : a->size_a = %d\n", &array->size_a);
/*
    i = 0;
    j = 1;
    b_temp = malloc(sizeof(int));
    if (!b_temp)
    {
        printf("Le malloc de b_temp a échoué !\n");
        return (0);
    }    
    b_temp[0] = a->a[0];
    printf("DS FT_PB1.C : b_temp = %d\n", *b_temp);

    while (a->size_a > i)
        a->a[i++] = a->a[j++];
    a->a[i] = a->a[i - 1];

//    printf("i = %d\n", i);
    printf("DS FT_PB1.C : a->a[dx] = %d %d %d %d\n", a->a[0], a->a[1], a->a[2], a->a[3]);
    printf("DS FT_PB1.C : b_temp = %d\n", *b_temp);
*/
//    new_ptr_b(b, b_temp);
    new_ptr_b(b_temp);


    write(1, "pb\n", 3);
    return (0);
}
