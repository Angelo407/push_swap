/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:26:06 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 15:43:44 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ss(t_array *array)
{
	if (swap_a_intermediate(array) == 1 && swap_b_intermediate(array) == 1)
		write(1, "ss\n", 3);
	else if (swap_a_intermediate(array) != 1 && swap_b_intermediate(array) != 1)
		return (0);
	return (0);
}
