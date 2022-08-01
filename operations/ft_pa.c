/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:23:07 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 15:35:20 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	push_a_intermediate(t_array *array, t_garbages *pai)
{
	check_malloc_a_temp(array, pai);
	check_malloc_b_temp(array, pai);
	pai->k[0] = array->b[0];
	pai->i = 0;
	pai->j = 1;
	while (pai->i < array->size_b)
		pai->b_temp[pai->i++] = array->b[pai->j++];
	array->size_b = array->size_b - 1;
	pai->i = 0;
	while (pai->i < array->size_b)
		array->b[pai->i++] = pai->b_temp[pai->i++];
	free_malloc_b_temp(array, pai);
	array->size_a = array->size_a + 1;
	if (array->size_a == 1)
		pai->a_temp[0] = pai->k[0];
	if (array->size_a > 1)
	{
		pai->i = 1;
		pai->j = 0;
		pai->a_temp[0] = pai->k[0];
		while (pai->i < array->size_a)
			pai->a_temp[pai->i++] = array->a[pai->j++];
	}
	free_malloc_a_temp(array, pai);
	return (1);
}

int	push_a(t_array *array, t_garbages *pai)
{
	if (ft_check_empty_array_b(array) == 1)
		return (0);
	if (push_a_intermediate(array, pai) == 1)
		write(1, "pa\n", 3);
	return (0);
}
