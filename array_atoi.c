# include "push_swap.h"

// ON VERRA SI BESOIN ! PR L'INSTANT, JE FAIS CE BORDEL DS LE MAIN !

int *array_atoi(int argc, char **argv)
{
    int *int_array;
    int i;
    int j;

    i = 1;
    j = 0;
    int_array = malloc(sizeof(int) * (argc - 1));
    if (!int_array)
    {
        printf("Le malloc de *int_array a échoué !\n");
        return (0);
    }
    while (j < argc - 1)
        int_array[j++] = ft_atoi(argv[i++]);
    return (int_array);
}
