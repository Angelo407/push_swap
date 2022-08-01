/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_empty_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:21:33 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 14:04:47 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

int ft_check_empty_array_a(t_array *array)
{
    if (array->size_a <= 0)
        return (1);
    return (0);
}

int ft_check_empty_array_b(t_array *array)
{
    if (array->size_b <= 0)
        return (1);
    return (0);
}
