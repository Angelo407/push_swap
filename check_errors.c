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


int ft_with_quotes(t_array *array, int ac, char **str)
{
    int i;
    int j;
    int size;
    char    *str_temp;
    int     *z;

    if (ac > 2)
    {
        write(1, "Error\n", 6);
		exit (0);
    }
    // str_temp = malloc(sizeof(char) * ft_strlen(str[1]) + 1000);
    // if (!str_temp)
    // {
    //     printf("Erreur\nLe malloc du str_temp a échoué !\n");
    //     return (0);
    // }
    z = malloc(sizeof(int) * 1000);
    if (!z)
    {
        printf("Erreur\nLe malloc du pointeur z a échoué !\n");
        return (0);
    }


    if (ac == 2)
    {
        str_temp = str[1];
        i = 0;
        while (str_temp[i] != '\0')
        {
            if (str_temp[i] == ' ')
                i++;
            else if (str_temp[i] != ' ')
            {
                str_temp[i] = ft_atoi_origin(&str_temp[i]);
                i++;
            }
        }
        size = 0;
        while (str_temp[size] != '\0')
            size++;
        printf("size = %d\n", size);

        i = 0;
        j = 0;
        while (j < size)
        {
            z[j] = ft_atoi_origin(&str_temp[i]);
            printf("z[j] = %d\n", z[j]);
            i++;
            j++;
        }


        printf("str_temp[idx] = %d %d %d %d %d %d %d\n", str_temp[0], str_temp[1], str_temp[2], str_temp[3], str_temp[4], str_temp[5], str_temp[6]);
        printf("z[idx] = %d %d %d %d %d %d\n", z[0], z[1], z[2], z[3], z[4], z[5]);
    }

    return (0);
}


    // printf("argv[1] = %s\n", argv[1]);
    
    // printf("argv[0][0] = %c\n", argv[0][0]);
    // printf("argv[0][1] = %c\n", argv[0][1]);
    // printf("argv[0][2] = %c\n", argv[0][2]);
    // printf("argv[0][3] = %c\n", argv[0][3]);
    // printf("argv[0][4] = %c\n", argv[0][4]);
    // printf("argv[0][5] = %c\n", argv[0][5]);
    // printf("argv[0][6] = %c\n", argv[0][6]);
    // printf("argv[0][7] = %c\n", argv[0][7]);
    // printf("argv[0][8] = %c\n", argv[0][8]);
    // printf("argv[0][9] = %c\n", argv[0][9]);
    // printf("argv[0][10] = %c\n", argv[0][10]);

    // printf("argv[1][0] = %c\n", argv[1][0]);
    // printf("argv[1][1] = %c\n", argv[1][1]);
    // printf("argv[1][2] = %c\n", argv[1][2]);
    // printf("argv[1][3] = %c\n", argv[1][3]);
    // printf("argv[1][4] = %c\n", argv[1][4]);
    // printf("argv[1][5] = %c\n", argv[1][5]);
    // printf("argv[1][6] = %c\n", argv[1][6]);
    // printf("argv[1][7] = %c\n", argv[1][7]);
    // printf("argv[1][8] = %c\n", argv[1][8]);

        /*
        str_temp = str[1];
        j = 0;
        while (str_temp[j] != '\0')
        {
            printf("str_temp[j] = %c | j = %d\n", str_temp[j], j);
            str_temp[j] = str[1][j];
            j++;
        }
        */