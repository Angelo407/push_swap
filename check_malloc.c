# include "push_swap.h"

void    *check_malloc_a_temp(t_array *array, t_garbages *garbages)
{
    garbages->a_temp = malloc(sizeof(int) * array->size_a);
    if (!garbages->a_temp)
    {
        printf("Le malloc garbages->a_temp a échoué !\n");
        return (0);
    }
    return (garbages->a_temp);
}

void    *check_malloc_b_temp(t_array *array, t_garbages *garbages)
{
    garbages->b_temp = malloc(sizeof(int) * array->size_b);
    if (!garbages->b_temp)
    {
        printf("Le malloc garbages->b_temp a échoué !\n");
        return (0);
    }
    return (garbages->b_temp);
}
