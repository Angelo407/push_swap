# include "push_swap.h"

int push_b(t_array *a, t_array *b)
{
//    int *array_temp;
//    array_temp = NULL;
    int i;
    int j;
    int *a_temp;
    int *b_temp;
    char    *a_temp_itoa;
//    ft_check_empty_array_a(a);

/*
    a_temp_itoa = malloc(sizeof(char *) + 1);
    b->b[0] = a->a[0]; 
    i = 0;
    j = 1;
    printf("AVANT : ft_size_array_int(a->a) = %d\n", ft_size_array_int(a->a));
    while (ft_size_array_int(a->a) > i)
    {
       a_temp_itoa[i] = *ft_itoa(a->a[j]);
//        a_temp_itoa[i] = *(char *)ft_memmove((char *)ft_itoa(a->a[j]), (char *)a_temp_itoa, 1);
        printf("valeur = %c | adresse = %p | i = %d\n", a_temp_itoa[i], &a_temp_itoa[i], i);
        i++;
        j++;
    }
    a_temp_itoa[i - 1] = '\0';
//    ft_memmove((char *)a_temp_itoa2, (char *)a_temp_itoa, ft_strlen(a_temp_itoa));
    printf("string = %s | adresse = %p | i = %d\n", a_temp_itoa, &a_temp_itoa, i);
    printf("APRES : ft_strlen(a_temp_itoa) = %zu\n", ft_strlen(a_temp_itoa));
*/

    i = 0;
    j = 1;
//    b_temp = a->a;
//    a_temp = &a->a[ft_size_array_int(a->a) - 1];
    while (ft_size_array_int(a->a) > i)
    {
        a->a[i] = a->a[j];
        i++;
        j++;
        printf("a->a[i] = %d\n", a->a[i]);
    }
    a->a[i] = a->a[i - 1];
    printf("ft_size_array_int(a->a) = %d | i = %d\n", ft_size_array_int(a->a), i);
    printf("Tableau a : %d %d %d %d %d %d %d\n", a->a[0], a->a[1], a->a[2], a->a[3], a->a[4], a->a[5], a->a[6]);
    
//    printf("b_temp = %d\n", *b_temp);


    write(1, "pb\n", 3);
    return (0);
}


/*
    while (ft_size_array_int(a->a) > i)
    {
        a->a[i] = a->a[j];
        i++;
        j++;
        printf("a->a[i] = %d\n", a->a[i]);
    }
*/


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