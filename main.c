# include "push_swap.h"

void    *check_malloc_int_array(t_array *array)
{
    array->int_array = malloc(sizeof(int) * array->size_tab_max);
    if (!array->int_array)
    {
        printf("Erreur\nLe malloc du pointeur int_array a échoué !\n");
        return (0);
    }
    return (array->int_array);
}

int main(int argc, char **argv)
{ 
    t_array     array;
    t_garbages  garbages;

    if (argc == 1)
        return (0);
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
        array.a[garbages.i++] = array.int_array[garbages.j++];
    ft_nbr_already_sorted(&array);

    // test(&array, &garbages);

    printf("\nMAIN RESULTAT : array.a[idx] = %d %d %d %d %d %d %d %d %d | array.size_a = %d\n", array.a[0], array.a[1], array.a[2], array.a[3], array.a[4], array.a[5], array.a[6], array.a[7], array.a[8], array.size_a);
    printf("MAIN RESULTAT : array.b[idx] = %d %d %d %d %d %d %d %d %d | array.size_b = %d\n", array.b[0], array.b[1], array.b[2], array.b[3], array.b[4], array.b[5], array.b[6], array.b[7], array.b[8], array.size_b);

    // while (1)
    // {
    //     sleep(1);
    //     printf("%d\n" , getpid());    
    // }

    // VOIR AVEC VALGRIND : PS DE LEAK AVEC LA COMMANDE LEAKS
    free_malloc_last(&array);
    return (0);
}

/*
PROBLèME :

// 1) NE PAS EXéCUTER UNE FONCTION SI PROBLèME :
    // push_a(&array, &garbages); // ne doit pas exécuter la fonction si size_a < 0 ; pareil pr push_b et voir si problème similaire avec d'autres opérations ?!

// MEME LOGIQUE SI JE COMMENCE AVEC push_a car le tableau b est vide !


// 2) avec push_b :
    // SI J'EXéCUTE push_b jusqu'à ce que size_b = 0, ça fait un segmentations fault ! Donc je ne peux pas entièrement remplir le tableau b jusqu'à ce que a soit vide ! 


*/