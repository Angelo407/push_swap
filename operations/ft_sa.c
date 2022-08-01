/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:25:34 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 16:19:02 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap_a_intermediate(t_array *array)
{
	int	idx_0;
	int	idx_1;
	int	i;

	if (array->size_a <= 1)
		return (0);
	idx_0 = array->a[0];
	idx_1 = array->a[1];
	i = 0;
	while (i < array->size_a)
	{
		if (i == 0)
			array->a[0] = idx_1;
		if (i == 1)
			array->a[1] = idx_0;
		i++;
	}
	return (1);
}

int	swap_a(t_array *array)
{
	if (swap_a_intermediate(array) == 1)
		write(1, "sa\n", 3);
	return (0);
}

/*
int	swap_a_intermediate(t_array *array)
{
	int	idxfirst;
	int	idxlast;
	int	i;

	if (array->size_a <= 1)
		return (0);
	idxfirst = array->a[0];
	idxlast = array->a[array->size_a - 1];
	i = -1;
	while (i < array->size_a)
	{
		if (i == 1)
			array->a[0] = idxlast;
		if (i == array->size_a - 1)
			array->a[array->size_a - 1] = idxfirst;
		i++;
	}
	return (1);
}

int	swap_a(t_array *array)
{
	if (swap_a_intermediate(array) == 1)
		write(1, "sa\n", 3);
	return (0);
}
*/