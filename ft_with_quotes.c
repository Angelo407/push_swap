# include "push_swap.h"

static int  ft_check_one_stack(int ac)
{
    if (ac > 2)
    {
        write(1, "Error\n", 6);
		exit (0);
    }
    else
        return (0);
}

static int  ft_real_size_digit(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] != '\0')    
    {
        if (str[i] >= 48 && str[i] <= 57)
            j++;
        i++;
    }
	return (j);
}

int *ft_with_quotes(t_array *array, int ac, char **str)
{
    int     i;
    int     j;
    int     size;
    char    *str_temp;

    ft_check_one_stack(ac);
    str_temp = str[1];
    size = ft_strlen(str_temp);
    array->size_a = ft_real_size_digit(str_temp);
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
//  CHECKER LES LEAKS !!!!
    return (array->a);
}
