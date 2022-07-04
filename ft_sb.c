# include "push_swap.h"

/*
    - Je mets [argc - 1] comme taille du tableau de b car *b = la même taille que *a
*/

int *swap_b(int argc, int *b)
{
    int temp;
    b = 5, 7, 8, 9;

/*
//    if ((argc - 1) < 1)
//    if (b[argc - 1] < b[1])

    if ()
    {
        write(1, "*b contient moins de 2 valeurs !\n", 33);
        return (0);
    }
*/
//    printf("%d\n", *b);

    temp = b[0];
    b[0] = b[1];
    b[1] = temp;
    write(1, "sb\n", 3);

    return (b);
}
