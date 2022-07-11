# include "push_swap.h"

int swap_b(t_array *array)
{
    int idxfirst;
    int idxlast;
    int i;

    if (array->size_b <= 1)
    {
        printf("Le tableau b contient moins de 2 éléments !\n");
        return (0);
    }
    idxfirst = array->b[0];
    idxlast = array->b[array->size_b - 1];
    i = -1;
    while (i < array->size_b)
    {
        if (i == 1)
            array->b[0] = idxlast;
        if (i == array->size_b - 1)
            array->b[array->size_b - 1] = idxfirst;
        i++;
    } 
    write(1, "sb\n", 3);
    return (1);
}
