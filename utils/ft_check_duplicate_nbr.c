/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate_nbr.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:20:42 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 14:04:44 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

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
    {
        write(1, "Error\n", 6);
        exit (0);
    }
    return (0);
}
