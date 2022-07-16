# include "push_swap.h"

int ft_nbr_already_sorted(t_array *nas)
{
    int i;

    i = 0;
    printf("avant while : nas->size_a = %d\n", nas->size_a);
    while (i < nas->size_a)
    {
        if (i == 0)
        {
            printf("premier if : nas->a[0] = %d | i = %d\n", nas->a[0], i);
            i++;
        }
        else if (nas->a[i - 1] < nas->a[i])
        {
            printf("1. nas->a[i - 1] = %d < nas->a[i] = %d | i = %d\n", nas->a[i - 1], nas->a[i], i);
            i++;
        }
        // else if (nas->a[i + 1] > nas->a[i - 1])
        else
        {
            printf("2. nas->a[i - 1] = %d > nas->a[i] = %d | i = %d\n", nas->a[i - 1], nas->a[i], i);
            // printf("Erreur\nLes nombres sont déjà triés !");
            // printf("Erreur : Les nombres sont déjà triés !\n");
            return (0);
            i++;
        }
        // printf("FIN DU WHILE : nas->[i] = %d\n", nas->a[i]);
    }
    printf("Erreur\nLes nombres sont déjà triés !");
    return (0);
}