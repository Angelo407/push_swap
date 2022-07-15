# include "push_swap.h"

void    *check_malloc_array(t_array *array)
{
    array->array = malloc(sizeof(t_array));
    if (!array->array)
    {
        printf("Le malloc array a échoué !\n");
        return (0);
    }
    return (array->array);
}

void    *check_malloc_int_array(t_array *array)
{
    array->int_array = malloc(sizeof(int) * array->size_tab_max);
    if (!array->int_array)
    {
        printf("Le malloc array->int_array a échoué !\n");
        return (0);
    }
    return (array->int_array);
}

void    *check_malloc_a(t_array *array)
{
    array->a = malloc(sizeof(int) * array->size_tab_max);
    if (!array->a)
    {
        printf("Le malloc array->a a échoué !\n");
        return (0);
    }
    return (array->a);
}

void    *check_malloc_b(t_array *array)
{
    array->b = malloc(sizeof(int) * array->size_tab_max);
    if (!array->b)
    {
        printf("Le malloc array->b a échoué !\n");
        return (0);
    }
    return (array->b);
}

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
