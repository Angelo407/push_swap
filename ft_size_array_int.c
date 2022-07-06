# include "push_swap.h"

int ft_size_array_int(int *array)
{
    int i;

    i = 0;
    while (array[i])
        i++;
    return (i);
}

/*
int main()
{
    int *array;
    
    array = malloc(sizeof(int));
    if (!array)
        return (0);
    array[0] = 5;
    array[1] = 3;
    array[2] = 2;
    array[3] = 8;

    ft_size_array_int(array);

    return (0);
}
*/