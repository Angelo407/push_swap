# include "push_swap.h"

int push_b(t_array *a, t_array *b)
{
//    int *array_temp;
//    array_temp = NULL;
    int i;
    int j;
    int *a_temp;

//    ft_check_empty_array_a(a);


    i = 0;
    j = 1;

    printf("AVANT : ft_size_array_int(a->a) = %d\n", ft_size_array_int(a->a));
    b->b[0] = a->a[0]; 
//    printf("a->a[0] = %d\n", a->a[0]);
//    printf("b->b[0] = %d\n", b->b[0]);

    while (ft_size_array_int(a->a) > i)
    {
        a->a[i] = a->a[j];
        i++;
        j++;
        printf("a->a[i] = %d\n", a->a[i]);
    }

    printf("APRES : ft_size_array_int(a->a) = %d\n", ft_size_array_int(a->a));

    printf("Tableau a : %d %d %d %d %d\n", a->a[0], a->a[1], a->a[2], a->a[3], a->a[4]);

/*
    a.a[0] = 6;
    a.a[1] = 3;
    a.a[2] = 2;
    a.a[3] = 8;
    a.a[4] = 7;
*/

    write(1, "pb\n", 3);
    return (0);
}

/*
int push_b(t_array *a, t_array *b)
{
//    int *array_temp;
//    array_temp = NULL;
    
    a->a = malloc(sizeof(int));
    a->a[0] = 5;
    a->a[1] = 3;
    a->a[2] = 2;
    a->a[3] = 8;
//    printf("*a = %d\n", *a->a);

    b->b = malloc(sizeof(int));
    b->b[0] = 9;
    b->b[1] = 1;
    b->b[2] = 3;
    b->b[3] = 6;
//    printf("*b = %d\n", *b->b);

    write(1, "pb\n", 3);
    return (0);
}
*/