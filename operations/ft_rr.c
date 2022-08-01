/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:24:20 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 15:39:23 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rr(t_array *array, t_garbages *rr)
{
	if (rotate_a_intermediate(array, rr) == 1
		&& rotate_b_intermediate(array, rr) == 1)
		write(1, "rr\n", 3);
	else if (rotate_a_intermediate(array, rr) != 1
		&& rotate_b_intermediate(array, rr) != 1)
		return (0);
	return (0);
}
