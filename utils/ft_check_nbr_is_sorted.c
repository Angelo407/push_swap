/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_nbr_is_sorted.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:22:21 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 15:48:05 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_nbr_is_sorted(t_array *array)
{
	int	i;

	i = 0;
	while (i < array->size_a)
	{
		if (i == 0)
			i++;
		else if (array->a[i - 1] < array->a[i])
			i++;
		else
			return (0);
	}
	write(1, "Error\n", 6);
	exit (0);
}
