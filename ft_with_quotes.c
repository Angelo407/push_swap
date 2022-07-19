# include "push_swap.h"

int *ft_with_quotes(t_array *array, int ac, char **str)
{
    int     i;
    int     j;
    int     size;
    char    *str_temp;
    int     *a_temp;

    if (ac > 2)
    {
        write(1, "Error\n", 6);
		exit (0);
    }
    str_temp = str[1];
    size = ft_strlen(str_temp);
    check_malloc_array(array);
    check_malloc_a(array);
    if (ac == 2)
    {
        i = 0;
        j = 0;
        while (j < size)
        {
            while (str_temp[i] == ' ')
                i++;
            array->a[j++] = ft_atoi_origin(&str_temp[i++]);
        }
    }
    printf("size = %d | j = %d | i = %d\n", size, j, i);

    size = i - j;
    printf("size = %d | j = %d | i = %d\n", size, j, i);
    // a_temp = array->a;
    // free(array->a);
    // free(array->array);
    return (a_temp);
}
