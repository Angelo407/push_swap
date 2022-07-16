# include "push_swap.h"

int ft_check_duplicate_nbr(t_array *cdn)
{
    int i;
    int j;
    int z;
    int k[1];

    i = 0;
    z = 0;
    while (i < cdn->size_a)
    {
        k[0] = cdn->a[i];
        // printf("k[0] = %d\n", k[0]);
        j = 0;
        while (j < cdn->size_a)
        {
            if (cdn->a[j] == k[0])
            {
                z++;
                // printf("cdn->a[j] = %d | k[0] = %d | i = %d | j = %d | z = %d\n",cdn->a[j], k[0], i, j, z);
            }
            j++;
        }
        i++;
    }
    z = z - cdn->size_a; 
    if (z > 0)
    {
        printf("Erreur\nIl y a minimum un même nombre !");
        return (0);
    }
    return (0);
}

    // printf("END : z = %d\n", z);
    // printf("i = %d | j = %d\n", i , j);
    // printf("FIN : i = %d | j = %d\n", i, j);
    // printf("cdn->a[j] = %d | k[0] = %d | j = %d | i = %d\n", cdn->a[j], k[0], j, i);




// int ft_check_duplicate_nbr(t_array *cdn)
// {
//     int i;
//     int j;
//     int z;
//     int k[1];

//     i = 0;
//     j = 0;
//     z = 0;
//     while (i < cdn->size_a)
//     {
//         k[0] = cdn->a[i];
//         // printf("k[0] = %d\n", k[0]);
//         j = 0;
//         if (cdn->a[i] == k[0])
//         {
//             // printf("cdn->a[j] = %d | k[0] = %d | j = %d | i = %d\n", cdn->a[j], k[0], j, i);
//             z++;
//             printf("z = %d | k[0] = %d\n", z, k[0]);
//             j++;
//         }
//         i++;
//     }
//     // printf("FIN : i = %d | j = %d\n", i, j);
//     return (0);
// }

