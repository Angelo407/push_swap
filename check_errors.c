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

int ft_check_is_integer(t_array *array)
{
    int i;

    i = 0;

    printf("sizeof = %lu\n", sizeof(array->a[0]));

    while (i < array->size_a)
    {
        if (sizeof(int) == (int)array->a[i])
        {
            i++;
        }
        else
        {
            printf("Erreur\nIl y a un ou des éléments du tableau qui ne sont pas des entiers !\n");
            return (1);
        }
    }
    return (0);
}
        // else if (sizeof(int) != array->a[i])
