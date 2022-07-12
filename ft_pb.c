# include "push_swap.h"

// push b : prenez le premier élément en haut de a et placez-le en haut de b. Ne rien faire si a est vide.

static int  new_ptr_b(int *b_temp, t_array *array)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (i < array->size_b + 1)
    {
        b_temp[i] = array->b[j];
//        printf("FT_NEW_PTR_A (ds while) : b_temp[i] = %d | array->b[j] = %d\n", b_temp[i], array->b[j]);
        i++;
        j++;
    }
//    printf("FT_NEW_PTR_A : a_temp[idx] = %d %d %d %d %d %d | array->size_a = %d\n", a_temp[0], a_temp[1], a_temp[2], a_temp[3], a_temp[4], a_temp[5], array->size_a);
//    array->b = NULL;
    array->b = b_temp;
    array->size_b = array->size_b + 1;
    // printf("FT_NEW_PTR_A : array->b[idx] = %d %d %d %d %d %d | array->size_b = %d\n", array->b[0], array->b[1], array->b[2], array->b[3], array->b[4], array->b[5], array->size_b);
    
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
    // Définir taille max !!! 
    b_temp = malloc(sizeof(int) * array->size_b);
    if (!b_temp)
    {
        printf("Le malloc de b_temp a échoué !\n");
        return (0);
    }
    b_temp[0] = array->a[0];

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

    // i = 0;
    // j = 0;
    // while (i < array->size_a)
    //     array->b[i++] = b_temp[j++];

    rotate_b(array);


    // printf("ft_pb.c : array->a[idx] = %d %d %d %d %d %d | array->size_a = %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4], array->a[5], array->size_a);
    // printf("ft_pb.c : array->b[idx] = %d %d %d %d %d %d | array->size_b = %d\n", array->b[0], array->b[1], array->b[2], array->b[3], array->b[4], array->b[5], array->size_b);

    write(1, "pb\n", 3);
    return (0);
}
