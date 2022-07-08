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
    while (j < array->size_a)
    {
        int_array[j++] = ft_atoi(argv[i++]); // ou utiliser la fonction array_atoi
        if (j == array->size_a)
            int_array[j] = int_array[array->size_a]; 
//      BUT : SUPPRIMER LES 0, donc pk fonctionne pas ? Ex : printf("%d\n", int_array[1000]); RES = 0 ???
//      alors que : taille_tableau.size_a = argc - 1 !!!?
    }
//  printf("j = %d\n", j);
//  printf("taille_tableau.size_a = %d\n", taille_tableau.size_a);
    printf("MAIN RESULTAT : int_array[idx] = %d %d %d %d %d\n", int_array[0], int_array[1], int_array[2], int_array[3], int_array[4]);


//  J'AI ESSAYER DE METTRE DANS UNE AUTRE VARIABLE MAIS LE RESULTAT EST IDENTIQUE !!!
    i = 0;
    j = 0;
    while (j < array->size_a)
    { 
        array->a[i] = int_array[j];
        printf("MAIN DS WHILE : array->a[i] = %d | int_array[j] = %d\n", array->a[i], int_array[j]);
        i++;
        j++;
    }
    printf("MAIN RESULTAT : array->a[idx] = %d %d %d %d %d\n", array->a[0], array->a[1], array->a[2], array->a[3], array->a[4]);


//    swap_a(argc - 1, a);
//    swap_b(argc - 1, b);
//    push_b(&tab1);
//    push_b(&a);
//    push_b(&array->a);
//    push_b(&a, &b);
    push_b(array);
//    push_b(&a, size_array_a);
    return (0);
}

/*
    b.b[0] = 4;
    b.b[1] = 9;
    b.b[2] = 2;
    b.b[3] = 5;
*/
