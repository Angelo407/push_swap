# include "push_swap.h"


int main(int argc, char **argv)
{ 
    t_array tab1;
    t_array tab2;
    t_array taille_tableau;
    int     *int_array;
    int     i;
    int     j;

    tab1.a = malloc(sizeof(int) * (argc - 1));
    if (!tab1.a)
    {
        printf("Le malloc du tableau a a échoué !\n");
        return (0);
    }
    tab2.b = malloc(sizeof(int) * (argc - 1));
    if (!tab2.b)
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
    taille_tableau.size_a = argc - 1;
    while (j < taille_tableau.size_a)
    {
        int_array[j++] = ft_atoi(argv[i++]); // ou utiliser la fonction array_atoi
        if (j == taille_tableau.size_a)
            int_array[j] = int_array[taille_tableau.size_a]; 
//      BUT : SUPPRIMER LES 0, donc pk fonctionne pas ? Ex : printf("%d\n", int_array[1000]); RES = 0 ???
//      alors que : taille_tableau.size_a = argc - 1 !!!?
    }
//  printf("j = %d\n", j);
//  printf("taille_tableau.size_a = %d\n", taille_tableau.size_a);
    printf("MAIN1 RESULTAT : int_array[idx] = %d %d %d %d %d\n", int_array[0], int_array[1], int_array[2], int_array[3], int_array[4]);

    i = 0;
    j = 0;
    while (j < taille_tableau.size_a)
    { 
        tab1.a[i] = int_array[j];
        printf("MAIN1 DS WHILE : tab1.a[i] = %d | int_array[j] = %d\n", tab1.a[i], int_array[j]);
        i++;
        j++;
    }
//    SACHANT QUE LE DEUXIEME ARGUMENT EST 3 4 5 9 // la longueur ou les nombres n'ont ps l'air de changer qqch !!!
//    SANS LE PRINTF : 48 -> 8
//    printf("MAIN1 RESULTAT : tab1.a[idx] = %d %d %d %d %d\n", tab1.a[0], tab1.a[1], tab1.a[2], tab1.a[3], tab1.a[4]); 
//    APRES LE PRINTF : 32 -> sp
//    printf("MAIN1 RESULTAT : tab1.a[idx] = %d %d %d %d\n", tab1.a[0], tab1.a[1], tab1.a[2], tab1.a[3]);
//    MNT : 48 -> 0    
//    printf("MAIN1 RESULTAT : tab1.a[idx] = %d %d %d\n", tab1.a[0], tab1.a[1], tab1.a[2]);
//    MNT : 40 -> (
//    printf("MAIN1 RESULTAT : tab1.a[idx] = %d %d\n", tab1.a[0], tab1.a[1]);
//    MNT : 32 -> sp
//    printf("MAIN1 RESULTAT : tab1.a[idx] = %d\n", tab1.a[0]);
//    MNT : 24 -> can (annulation je crois)



//    swap_a(argc - 1, a);
//    swap_b(argc - 1, b);
    
    //push_b1(&tab1);
    push_b1();

//    push_b1(&a);
//    push_b(&array->a);
//    push_b(&a, &b);
//    push_b(array);
//    push_b(&a, size_array_a);
    return (0);
}

/*
    b.b[0] = 4;
    b.b[1] = 9;
    b.b[2] = 2;
    b.b[3] = 5;
*/