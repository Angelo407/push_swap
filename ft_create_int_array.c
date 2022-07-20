# include "push_swap.h"

int *ft_create_int_array(t_array *array, int ac, char **str)
{
    int size;
    int i;
    int j;
    
    size = ft_strlen(str[1]);
    if (size > array->size_a)
        ft_with_quotes(array, ac, str);
    else if (array->size_a == ac - 1)
    {      
        i = 1;
        j = 0;
        while (j < array->size_a)
            array->a[j++] = ft_atoi(str[i++]);
    }
    return (array->a);
}
