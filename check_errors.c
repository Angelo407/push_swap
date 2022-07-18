# include "push_swap.h"

int display_error(void) // problème avec cette fonction : par exemple, essayer de la mettre ds ft_nbr_already_sorted
{
    write(1, "Error\n", 6);
    exit (0);
}

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





    // int z = 0;
    // while (z < (array.size_a * 2) - 1)
    // {
    //     if (argv[1][z] == '\0')
    //         z++;
    //     if (!(argv[1][z] >= '0' && argv[1][z] <= '9'))
    //         display_error();
    //     z++;
    // }