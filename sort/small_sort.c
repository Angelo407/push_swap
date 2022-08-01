/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:27:57 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 14:24:16 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
# include "../push_swap.h"

static int  ft_small_sort_3(t_array *array, t_garbages *ss3)
{
    // VOIR EMMANUEL "CASTER" UN ARGUMENT NON UTILISé | norminette ? car les flags disent rien
    if (array->size_a == 2 && array->a[0] > array->a[1])
        swap_a(array);
    else if (array->size_a == 3)
    {
        if (array->a[0] > array->a[1] && array->a[1] > array->a[2])
            swap_a(array);
        else if (array->a[0] > array->a[1] && array->a[1] < array->a[2])
            rotate_a(array, ss3);
        else if (array->a[0] < array->a[1] && array->a[1] > array->a[2])
            reverse_rotate_a(array, ss3);
    }
    return (0);
}

static int  ft_small_sort_4(t_array *array, t_garbages *ss3)
{
    return (0);
}

int ft_small_sort(t_array *array, t_garbages *ss)
{
    ft_small_sort_3(array, ss);
    ft_small_sort_4(array, ss);
    return (0);
}
*/

/*
Départ : 1 2 3 
3 2 1 -> sa
3 1 2 -> ra
2 3 1 -> rra

*/
