/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:25:53 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 16:48:54 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap_b_intermediate(t_array *array)
{
	int	idx_0;
	int	idx_1;
	int	i;

	if (array->size_b <= 1)
		return (0);
	idx_0 = array->b[0];
	idx_1 = array->b[1];
	i = 0;
	while (i < array->size_b)
	{
		if (i == 0)
			array->b[0] = idx_1;
		if (i == 1)
			array->b[1] = idx_0;
		i++;
	}
	return (1);
}

int	swap_b(t_array *array)
{
	if (swap_b_intermediate(array) == 1)
		write(1, "sb\n", 3);
	return (0);
}

/*
int	swap_b_intermediate(t_array *array)
{
	int	idxfirst;
	int	idxlast;
	int	i;

	if (array->size_b <= 1)
		return (0);
	idxfirst = array->b[0];
	idxlast = array->b[array->size_b - 1];
	i = -1;
	while (i < array->size_b)
	{
		if (i == 1)
			array->b[0] = idxlast;
		if (i == array->size_b - 1)
			array->b[array->size_b - 1] = idxfirst;
		i++;
	}
	return (1);
}

int	swap_b(t_array *array)
{
	if (swap_b_intermediate(array) == 1)
		write(1, "sb\n", 3);
	return (0);
}
*/