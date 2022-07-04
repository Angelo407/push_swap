# include "push_swap.h"
/*
static int  array_is_empty(int argc, int *b)
{
    int i;
    
    b = ft_calloc(argc - 1, sizeof(int));
    i = 0;
    while (i < argc)
    {
        if (b[i] == 0)
            i++;
        else
            return (1);
    }
    free(b);
    printf("Le tableau est rempli de zéro donc il est vide\n");
    return (0);
}
*/
/*
static int  array_is_empty(int argc, int *b)
{
    
    b[argc - 1];


//    printf("Le tableau est rempli de zéro donc il est vide\n");
    return (0);
}
*/
//int *swap_b(int argc, int *b)
int *swap_b(int argc, int *b)
{
    int temp;

    if (b[argc - 1] < b[1])
    {
        write(1, "*b est vide !\n", 14);
        return (0);
    }


    temp = b[0];
    b[0] = b[1];
    b[1] = temp;
    write(1, "sb\n", 3);
    return (b);
}


/*
int *swap_b(int argc, int *b)
{
    int temp;
    printf("avant\n");
    array_is_empty(argc, b);
    printf("après\n");

    b = NULL;

    temp = b[0];
    b[0] = b[1];
    b[1] = temp;
    write(1, "sb\n", 3);
    
    return (b);
}
*/
