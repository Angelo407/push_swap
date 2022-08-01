/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:25:16 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 15:41:36 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rrr(t_array *array, t_garbages *rrr)
{
	if (reverse_rotate_a_intermediate(array, rrr) == 1
		&& reverse_rotate_b_intermediate(array, rrr) == 1)
		write(1, "rrr\n", 4);
	else if (reverse_rotate_a_intermediate(array, rrr) != 1
		&& reverse_rotate_b_intermediate(array, rrr) != 1)
		return (0);
	return (0);
}
