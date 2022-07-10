# include "push_swap.h"

// push b : prenez le premier élément en haut de a et placez-le en haut de b. Ne rien faire si a est vide.

static int  new_ptr_b(int *b_temp, t_array *array)
{
    int i;
    int j;

    i = 1;
    j = 0;
    printf("??? FT_NEW_PTR_A : b_temp[idx] = %d %d %d %d %d %d | array->size_a = %d\n", b_temp[0], b_temp[1], b_temp[2], b_temp[3], b_temp[4], b_temp[5], array->size_a);
    // Le printf devrait donner 8 à l'index 0 !!!
    while (i < array->size_b + 1)
    {
        b_temp[i] = array->b[j];
//        printf("FT_NEW_PTR_A (ds while) : b_temp[i] = %d | array->b[j] = %d\n", b_temp[i], array->b[j]);
        i++;
        j++;
    }
//    printf("FT_NEW_PTR_A : a_temp[idx] = %d %d %d %d %d %d | array->size_a = %d\n", a_temp[0], a_temp[1], a_temp[2], a_temp[3], a_temp[4], a_temp[5], array->size_a);
    array->b = b_temp;
    array->size_b = array->size_b + 1;
    printf("FT_NEW_PTR_A : array->b[idx] = %d %d %d %d %d %d | array->size_b = %d\n", array->b[0], array->b[1], array->b[2], array->b[3], array->b[4], array->b[5], array->size_b);
    
    return (0);
}

int push_b(t_array *array)
{
    int     i;
    int     j;
    int     *b_temp;

    if (array->size_a == 0)
    {
        printf("Le tableau a est vide !\n");
        return (0);
    }
    b_temp = malloc(sizeof(int));
    if (!b_temp)
    {
        printf("Le malloc de b_temp a échoué !\n");
        return (0);
    }

    b_temp[0] = array->a[0];
    printf("ft_pb.c : b_temp[0] = %d | array->size_a = %d\n", b_temp[0], array->size_a);

    i = 0;
    j = 1;
    while (array->size_a > i)
    {
        array->a[i] = array->a[j];
//        printf("ft_pb.c (ds while) : array->a[i] = %d\n", array->a[i]);
        i++;
        j++;
    }    
    array->size_a = array->size_a - 1;

    new_ptr_b(b_temp, array);

    printf("ft_pb.c : array->a[idx] = %d %d %d %d %d %d | array->size_a = %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4], array->a[5], array->size_a);
    printf("ft_pb.c : array->b[idx] = %d %d %d %d %d %d | array->size_b = %d\n", array->b[0], array->b[1], array->b[2], array->b[3], array->b[4], array->b[5], array->size_b);

    write(1, "pb\n", 3);
    return (0);
}

/*
static int  new_ptr_b(int *b_temp, t_array *array)
{
    array->size_b = array->size_b + 1;
    b_temp[array->size_b] = array->b[array->size_b];

    printf("ft_new_ptr_b : array->size_b = %d\n", array->size_b);
    printf("ft_new_ptr_b : b_temp[idx] = %d %d %d %d %d %d\n", b_temp[0], b_temp[1], b_temp[2], b_temp[3], b_temp[4], b_temp[5]); // en ajoutant un 0 ça fait un segfault

    return (0);
}
*/