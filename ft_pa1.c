# include "push_swap.h"

// push_a : prenez le premier élément en haut de b et placez-le en haut de a. Ne rien faire si b est vide.

static int  new_ptr_a(int *a_temp, t_array *array)
{
    int i;
    int j;

    i = 1;
    j = 0;
    printf("FT_NEW_PTR_A : a_temp[idx] = %d %d %d %d %d %d | array->size_a = %d\n", a_temp[0], a_temp[1], a_temp[2], a_temp[3], a_temp[4], a_temp[5], array->size_a);
    while (i < array->size_a + 1)
    {
        a_temp[i] = array->a[j];
//        printf("FT_NEW_PTR_A (ds while) : a_temp[i] = %d | array->a[j] = %d\n", a_temp[i], array->a[j]);
        i++;
        j++;
    }
//    printf("FT_NEW_PTR_A : a_temp[idx] = %d %d %d %d %d %d | array->size_a = %d\n", a_temp[0], a_temp[1], a_temp[2], a_temp[3], a_temp[4], a_temp[5], array->size_a);
//    array->a = NULL;
    array->a = a_temp;
    array->size_a = array->size_a + 1;
    printf("FT_NEW_PTR_A : array->a[idx] = %d %d %d %d %d %d | array->size_a = %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4], array->a[5], array->size_a);
    
    return (0);
}

int push_a(t_array *array)
{
//  DEFINIR QUE b = max argc - 1;
    int     i;
    int     j;
    int     *a_temp;

    if (array->size_b == 0)
    {
        printf("Le tableau b est vide !\n");
        return (0);
    }
    a_temp = malloc(sizeof(int) * array->size_a);
    if (!a_temp)
    {
        printf("Le malloc de a_temp a échoué !\n");
        return (0);
    }
    a_temp[0] = array->b[0];
//    printf("ft_pa.c : a_temp[0] = %d | array->size_b = %d\n", a_temp[0], array->size_b);
    i = 0;
    j = 1;
    while (array->size_b > i)
    {
        array->b[i] = array->b[j];
//        printf("ft_pa.c (ds while) : array->b[i] = %d\n", array->b[i]);
        i++;
        j++;
    }   
    array->size_b = array->size_b - 1;

    new_ptr_a(a_temp, array);

    // printf("ft_pa.c : array->a[idx] = %d %d %d %d %d %d | array->size_a = %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4], array->a[5], array->size_a);
    // printf("ft_pa.c : array->b[idx] = %d %d %d %d %d %d | array->size_b = %d\n", array->b[0], array->b[1], array->b[2], array->b[3], array->b[4], array->b[5], array->size_b);

//    printf("FT_NEW_PTR_A : a_temp[idx] = %d %d %d %d %d %d | array->size_a = %d\n", a_temp[0], a_temp[1], a_temp[2], a_temp[3], a_temp[4], a_temp[5], array->size_a);


    write(1, "pa\n", 3);
    return (0);
}
