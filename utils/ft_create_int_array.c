/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_int_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:22:43 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 18:30:04 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_create_int_array(t_array *array, int ac, char **str)
{
	int	size;
	int	i;
	int	j;

	size = ft_strlen(str[1]);
	if (size > array->size_a)
		ft_with_quotes(array, ac, str);
	else if (array->size_a == ac - 1)
	{
		i = 1;
		j = 0;
		while (j < array->size_a)
			array->a[j++] = ft_atoi(str[i++]);
	}
	return (array->a);
}
