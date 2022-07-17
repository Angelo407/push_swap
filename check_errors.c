# include "push_swap.h"

int ft_check_errors(t_array *array, t_garbages *ce)
{
    if (ft_nbr_already_sorted(array) == 1)
        printf("Erreur\nLes nombres sont déjà triés !\n");
    else if (ft_check_duplicate_nbr(array, ce) == 1)
        printf("Erreur\nIl y a minimum un nombre dubliqué !\n");
    return (0); // COMMENT METTRE UN EXIT SANS QUE CA QUITTE LE PROGRAMME S'IL N'Y A PAS DE PROBLèME ?
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
    return (1);
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
        return (1);
    return (0);
}

// int ft_check_is_nbr_type_integer(t_array *array)
// {
//     long i;
//     long int_max;
//     long int_min;

//     i = 0;
//     int_max = 2147483647;
//     int_min = -2147483648;
//     while (i < array->size_a)
//     {
//         if ((long)array->a[i] < int_min || (long)array->a[i] > int_max)
//         {
//             printf("Erreur\nIl y a minimum un nombre qui n'est pas un integer !");
//             return (0);
//         }
//         else
//         i++;
//     }
//     printf("salut\n");
//     return (0);
// }

int ft_check_is_nbr_type_integer(t_array *array)
{
    long    i;
    long    int_min;
    long    int_max;

    int_max = 2147483647;
    int_min = -2147483648;
    i = 0;
    while (i < array->size_a)
    {
        if (array->a[i] > int_max || array->a[i] < int_min)
        {
            printf("Erreur\nIl y a minimum un nombre qui n'est pas un integer !");
            return (0);
        }
        else
        {
            printf("array->a[i] = %d\n", array->a[i]);
            i++;
        }
    }
    return (0);
}






// int ft_check_is_integer(t_array *array)
// {
//     int i;
//     char c;

//     i = 0;
//     c = 'a';
//     printf("sizeof(array->a[i]) = %lu\n", sizeof(array->a[i]));
//     printf("sizeof(array->a) = %lu\n", sizeof(array->a));
//     printf("sizeof(c) = %lu\n", sizeof(c));

//     while (i < array->size_a)
//     {
//         if (sizeof(array->a[i]) == sizeof(int))
//         {
//             printf("array->a[i] = %d | sizeof(array->a[i]) = %lu\n", array->a[i], sizeof(array->a[i]));
//             i++; 
//         }
//         else
//         {
//             printf("Erreur\nIl y a un ou des éléments du tableau qui ne sont pas des entiers !\n");
//             // return (0);
//         }
//     }
//     return (0);
// }

