# include "push_swap.h"

// push_a : prenez le premier élément en haut de b et placez-le en haut de a. Ne rien faire si b est vide.

static int  new_ptr_a(int *a_temp, t_array *array)
{
    array->size_a = array->size_a + 1;
    a_temp[array->size_a] = array->a[array->size_a];

    printf("DS FT_NEW_PTR_A : array->size_a = %d\n", array->size_a);
    printf("DS FT_NEW_PTR_A : a_temp[idx] = %d %d %d %d %d %d\n", a_temp[0], a_temp[1], a_temp[2], a_temp[3], a_temp[4], a_temp[5]); // en ajoutant un 0 ça fait un segfault

    return (0);
}

int push_a(t_array *array)
{
    int     i;
    int     j;
    int     *a_temp;

    array->b[0] = 8;
    array->b[1] = 9;
    array->b[2] = 2;
    array->b[3] = 5;
    array->size_b = 4;
//    ft_check_empty_array_b(b);

//    printf("DS FT_PA.C -> AVANT WHILE : array->size_b = %d\n", array->size_b);

    a_temp = malloc(sizeof(int));
    if (!a_temp)
    {
        printf("Le malloc de a_temp a échoué !\n");
        return (0);
    }
    a_temp[0] = array->b[0];
    printf("DS FT_PA.C : a_temp[0] = %d | array->size_b = %d\n", a_temp[0], array->size_b);
    i = 0;
    j = 1;
    while (array->size_b > i)
    {
        array->b[i] = array->b[j];
        printf("DS FT_PA.C -> WHILE : array->b[i] = %d\n", array->b[i]);
        i++;
        j++;
    }   
    array->size_b = array->size_b - 1;

    printf("DS FT_PA.C : array->b[idx] = %d %d %d %d %d | array->size_b = %d\n", array->b[0], array->b[1], array->b[2], array->b[3], array->b[4], array->size_b);

// GESTION DE LA STACK B OK; MNT PROBLEME AVEC LA STACK A QU'ON TRAITE DS LA FONCTION new_ptr_a(a_temp, array);

    new_ptr_a(a_temp, array);
//    printf("DS FT_PA.C -> APRES WHILE : array->size_b = %d\n", array->size_b);

    write(1, "pa\n", 3);
    return (0);
}
// 4, 9, 2, 5