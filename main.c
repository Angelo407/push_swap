# include "push_swap.h"


int main(int argc, char **argv)
{ 
    t_array     array;
    t_garbages  garbages;

    check_malloc_array(&array);
    array.size_tab_max = argc - 1;
    check_malloc_int_array(&array);
    check_malloc_a(&array);
    check_malloc_b(&array);
    garbages.i = 1;
    garbages.j = 0;
    array.size_a = array.size_tab_max;
    array.size_b = 0;
    while (garbages.j < array.size_a)
        array.int_array[garbages.j++] = ft_atoi(argv[garbages.i++]);
    garbages.i = 0;
    garbages.j = 0;
    while (garbages.j < array.size_a)
    {
        array.a[garbages.i] = array.int_array[garbages.j];
        garbages.i++;   
        garbages.j++;
    }
    // free(array.int_array); // inutile : pk ne provoque pas un leak sans le free ?

    // test(array, &garbages);

    // printf("\nMAIN RESULTAT : array.a[idx] = %d %d %d %d %d %d %d %d %d | array.size_a = %d\n", array.a[0], array.a[1], array.a[2], array.a[3], array.a[4], array.a[5], array.a[6], array.a[7], array.a[8], array.size_a);
    // printf("MAIN RESULTAT : array.b[idx] = %d %d %d %d %d %d %d %d %d | array.size_b = %d\n", array.b[0], array.b[1], array.b[2], array.b[3], array.b[4], array.b[5], array.b[6], array.b[7], array.b[8], array.size_b);
    
    reverse_rotate_a(&array, &garbages);
    reverse_rotate_a(&array, &garbages);
    reverse_rotate_a(&array, &garbages);
    
    // free(array.a);

    // printf("\nMAIN RESULTAT : array.a[idx] = %d %d %d %d %d %d %d %d %d | array.size_a = %d\n", array.a[0], array.a[1], array.a[2], array.a[3], array.a[4], array.a[5], array.a[6], array.a[7], array.a[8], array.size_a);
    // printf("MAIN RESULTAT : array.b[idx] = %d %d %d %d %d %d %d %d %d | array.size_b = %d\n", array.b[0], array.b[1], array.b[2], array.b[3], array.b[4], array.b[5], array.b[6], array.b[7], array.b[8], array.size_b);

    // free(array->b);
    // printf("MAIN RESULTAT : array->a[idx] = %d %d %d %d %d %d %d %d %d | array->size_a = %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4], array->a[5], array->a[6], array->a[7], array->a[8], array->size_a);
    // printf("MAIN RESULTAT : array->b[idx] = %d %d %d %d %d %d %d %d %d | array->size_b = %d\n", array->b[0], array->b[1], array->b[2], array->b[3], array->b[4], array->b[5], array->b[6], array->b[7], array->b[8], array->size_b);

    while (1)
    {
        sleep(1);
        printf("%d\n" , getpid());    
    }
    return (0);
}
