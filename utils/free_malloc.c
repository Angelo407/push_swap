/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_malloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:19:35 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 14:04:34 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

int  free_malloc_a_temp(t_array *array, t_garbages *garbages)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < array->size_a)
        array->a[i++] = garbages->a_temp[j++];
    free(garbages->a_temp);
    return (0);
}

int  free_malloc_b_temp(t_array *array, t_garbages *garbages)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < array->size_b)
        array->b[i++] = garbages->b_temp[j++];
    free(garbages->b_temp);
    return (0);
}

int free_malloc_last(t_array *array)
{
    free(array->a);
    free(array->b);
    free(array->array);
    return (0);
}
