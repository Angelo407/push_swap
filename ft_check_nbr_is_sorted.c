# include "push_swap.h"

int ft_check_nbr_is_sorted(t_array *array)
{
    int i;

    i = 0;
    while (i < array->size_a)
    {
        if (i == 0)
            i++;
        else if (array->a[i - 1] < array->a[i])
            i++;
        else
            return (0);
    }
    write(1, "Error\n", 6);
    exit (0);
}
