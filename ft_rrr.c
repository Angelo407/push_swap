# include "push_swap.h"

int rrr(t_array *array, t_garbages *rrr)
{
    if (reverse_rotate_a_intermediate(array, rrr) == 1 && reverse_rotate_b_intermediate(array, rrr) == 1)
        write(1, "rrr\n", 4);
    else if (reverse_rotate_a_intermediate(array, rrr) != 1 && reverse_rotate_b_intermediate(array, rrr) != 1)
    {
        printf("Erreur\nProblème survenu avec la fonction reverse_rotate_a ou reverse_rotate_b !\n");
        return (0);
    }
    return (0);
}
