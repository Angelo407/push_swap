/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_with_quotes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:26:47 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 15:50:16 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_check_one_stack(int ac)
{
	if (ac > 2)
	{
		write(1, "Error\n", 6);
		exit (0);
	}
	else
		return (0);
}

static int	ft_real_size_digit(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			j++;
			while (str[i + 1] >= '0' && str[i + 1] <= '9')
				i++;
		}
		i++;
	}
	return (j);
}

int	*ft_with_quotes(t_array *array, int ac, char **str)
{
	int		i;
	int		j;
	int		size;
	char	*str_temp;

	ft_check_one_stack(ac);
	str_temp = str[1];
	size = ft_strlen(str_temp);
	array->size_a = ft_real_size_digit(str_temp);
	if (ac == 2)
	{
		i = 0;
		j = 0;
		while (j < size)
		{
			while (str_temp[i] == ' ')
				i++;
			array->a[j++] = ft_atoi_origin(&str_temp[i++]);
			while (str_temp[i] >= '0' && str_temp[i] <= '9')
				i++;
		}
	}
	return (array->a);
}
