# include "push_swap.h"

int swap_a(t_array *array)
{
    int idxfirst;
    int idxlast;
    int i;

    if (array->size_a <= 1)
    {
        printf("Le tableau a contient moins de 2 éléments !\n");
        return (0);
    }
    idxfirst = array->a[0];
    idxlast = array->a[array->size_a - 1];
    i = -1;
    while (i < array->size_a)
    {
        if (i == 1)
            array->a[0] = idxlast;
        if (i == array->size_a - 1)
            array->a[array->size_a - 1] = idxfirst;
        i++;
    } 
    write(1, "sa\n", 3);
    return (1);
}
