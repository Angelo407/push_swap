# include "push_swap.h"


int main(int argc, char **argv)
{ 
    t_array *array;
    int     *int_array;
    int     i;
    int     j;

    array = malloc(sizeof(t_array));
    if (!array)
    {
        printf("Le malloc array a échoué !\n");
        return (0);
    }
    array->a = malloc(sizeof(int) * (argc - 1));
    if (!array->a)
    {
        printf("Le malloc du array a échoué !\n");
        return (0);
    }
    array->b = malloc(sizeof(int) * (argc - 1));
    if (!array->b)
    {
        printf("Le malloc du tableau b a échoué !\n");
        return (0);
    }
    int_array = malloc(sizeof(int) * (argc - 1));
    if (!int_array)
    {
        printf("Le malloc de *int_array a échoué !\n");
        return (0);
    }
    i = 1;
    j = 0;
    array->size_a = argc - 1;
    array->size_b = 0;

    // array->b[0] = 8;
    // array->b[1] = 9;
    // array->b[2] = 3;
    // array->b[3] = 5;
    // array->b[4] = 7;

    // array->size_b = 5;

    while (j < array->size_a)
        int_array[j++] = ft_atoi(argv[i++]);
    
//    printf("MAIN RESULTAT : int_array[idx] = %d %d %d %d %d\n", int_array[0], int_array[1], int_array[2], int_array[3], int_array[4]);

    i = 0;
    j = 0;
    while (j < array->size_a)
    { 
        array->a[i] = int_array[j];
//        printf("MAIN (ds while) : array->a[i] = %d | int_array[j] = %d\n", array->a[i], int_array[j]);
        i++;
        j++;
    }
    // printf("MAIN (avant opérations) : array->a[idx] = %d %d %d %d %d %d | array->size_a = %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4], array->a[5], array->size_a);
//    printf("MAIN : array->a[idx] = %d %d %d %d %d %d | array->size_a = %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4], array->a[5], array->size_a);
//    printf("MAIN : array->b[idx] = %d %d %d %d %d %d | array->size_b = %d\n", array->b[0], array->b[1], array->b[2], array->b[3], array->b[4], array->b[5], array->size_b);

    // swap_a(array);
    // swap_a(array);
    // swap_b(array);
    // swap_a(array);
    // ss(array);
    // ss(array);

    // push_b(array);
    // push_b(array);
    // push_b(array);
    // push_b(array);
    // push_b(array);

    // push_b(array);
    // push_b(array);
    // push_b(array);
    // push_b(array);

    rotate_a(array);
    rotate_a(array);
    rotate_a(array);
    rotate_a(array);



    // rotate_b(array);
    // rotate_b(array);
    // rotate_b(array);
    // rotate_b(array);
    
    // push_b(array);
    // printf("MAIN apres push_b : array->a[idx] = %d %d %d %d %d %d %d | array->size_a = %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4], array->a[5], array->a[6], array->size_a);
    // printf("MAIN apres push_b : array->b[idx] = %d %d %d %d %d %d %d | array->size_b = %d\n", array->b[0], array->b[1], array->b[2], array->b[3], array->b[4], array->b[5], array->b[6], array->size_b);
    // printf("\n");
    
    // push_a(array);
    // printf("MAIN apres push_a : array->a[idx] = %d %d %d %d %d %d %d | array->size_a = %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4], array->a[5], array->a[6], array->size_a);
    // printf("MAIN apres push_a : array->b[idx] = %d %d %d %d %d %d %d | array->size_b = %d\n", array->b[0], array->b[1], array->b[2], array->b[3], array->b[4], array->b[5], array->b[6], array->size_b);
    // printf("\n");
    
    // push_b(array);
    // printf("MAIN apres push_b : array->a[idx] = %d %d %d %d %d %d %d | array->size_a = %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4], array->a[5], array->a[6], array->size_a);
    // printf("MAIN apres push_b : array->b[idx] = %d %d %d %d %d %d %d | array->size_b = %d\n", array->b[0], array->b[1], array->b[2], array->b[3], array->b[4], array->b[5], array->b[6], array->size_b);
    // printf("\n");

    // push_a(array);
    // printf("MAIN apres push_a : array->a[idx] = %d %d %d %d %d %d %d | array->size_a = %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4], array->a[5], array->a[6], array->size_a);
    // printf("MAIN apres push_a : array->b[idx] = %d %d %d %d %d %d %d | array->size_b = %d\n", array->b[0], array->b[1], array->b[2], array->b[3], array->b[4], array->b[5], array->b[6], array->size_b);
    // printf("\n");

    printf("\n");
    printf("MAIN RESULTAT : array->a[idx] = %d %d %d %d %d %d %d %d | array->size_a = %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4], array->a[5], array->a[6], array->a[7], array->size_a);
    printf("MAIN RESULTAT : array->b[idx] = %d %d %d %d %d %d %d %d | array->size_b = %d\n", array->b[0], array->b[1], array->b[2], array->b[3], array->b[4], array->b[5], array->b[6], array->b[7], array->size_b);

    return (0);
}
