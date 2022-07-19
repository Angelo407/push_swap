# include "push_swap.h"

int ft_nbr_already_sorted(t_array *nas)
{
    int i;

    i = 0;
    while (i < nas->size_a)
    {
        if (i == 0)
            i++;
        else if (nas->a[i - 1] < nas->a[i])
            i++;
        else
            return (0);
    }
    write(1, "Error\n", 6);
    exit (0);
}

int ft_check_duplicate_nbr(t_array *array, t_garbages *cdn)
{
    int z;

    z = 0;
    cdn->i = 0;
    while (cdn->i < array->size_a)
    {
        cdn->k[0] = array->a[cdn->i];
        cdn->j = 0;
        while (cdn->j < array->size_a)
        {
            if (array->a[cdn->j] == cdn->k[0])
                z++;
            cdn->j++;
        }
        cdn->i++;
    }
    z = z - array->size_a; 
    if (z > 0)
    {
        write(1, "Error\n", 6);
        exit (0);
    }
    return (0);
}

int ft_is_number(t_array *array, char **str)
{
    int i;
    
    i = 0;
    while (i < (array->size_a * 2) - 1)
    {
        if (str[1][i] == '\0')
            i++;
        if (str[1][i] == '+' || str[1][i] == '-')
            str[1][i] = str[1][i + 1];
        if (!(str[1][i] >= '0' && str[1][i] <= '9'))
        {
            write(1, "Error\n", 6);
            exit (0);
        }
        i++;
    }
    return (0);
}


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
    printf("size = %d | j = %d\n", j, size);
    // a_temp = array->a;
    // free(array->a);
    // free(array->array);
    return (a_temp);
}
