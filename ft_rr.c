# include "push_swap.h"

int rr(t_array *array, t_garbages *rr)
{
    if (rotate_a_intermediate(array, rr) == 1 && rotate_b_intermediate(array, rr) == 1)
        write(1, "rr\n", 3);
    else if (rotate_a_intermediate(array, rr) != 1 && rotate_b_intermediate(array, rr) != 1)
    {
        printf("Erreur\nProblème survenu avec la fonction rotate_a ou rotate_b !\n");
        return (0);
    }
    return (0);
}
