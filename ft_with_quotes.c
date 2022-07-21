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




static int  ft_num_to_nums(t_array *array)
{
    int i;
    int nbr;

    i = 0;
    while (array->a[i] >= 0 && array->a[i] <= 9)
    {

        nbr = array->a[i];
        printf("nbr = %d\n", nbr);
        i++;
    }
    array->a[i] = nbr;
    // printf("array->a = %d | nbr = %d\n", array->a, nbr);
    return (array->a[i]);
}


int	ft_nbrlen(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		i = 1;
	else if (nb > 0)
		i = 0;
	while (nb)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}


int *ft_with_quotes(t_array *array, int ac, char **str)
{
    int     i;
    int     j;
    int     k;
    int     size;
    char    *str_temp;
    char    k_temp[1000];

    ft_check_one_stack(ac);
    str_temp = str[1];
    size = ft_strlen(str_temp);
    array->size_a = ft_real_size_digit(str_temp);
    if (ac == 2)
    {
        i = 0;
        j = 0;
        while (j < size)
        {
            while (str_temp[i] == ' ')
                i++;
            k = 0;
            if (str_temp[i + 1] >= '0' && str_temp[i + 1] <= '9')
                k++;
            // if (k > 0)
            // {
            //     k = 0;
            //     while (k_temp[k] != ' ')
            //     {
            //         // printf("salut\n");
            //         k_temp[k] = str_temp[i];
            //         printf("k_temp = %s\n", k_temp);
            //         k++;
            //     }
            // }
            array->a[j] = ft_atoi_origin(&str_temp[i]);
            j++;
            i++;
        }
    }    
    return (array->a);
}




/*
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
    return (array->a);
}
*/
