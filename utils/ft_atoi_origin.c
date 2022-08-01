/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_origin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:19:58 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 14:04:38 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

int	ft_atoi_origin(const char *str)
{
	int	i;
	long long	neg;
	long long	res;

	i = 0;
	neg = 1;
	res = 0;
	// while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	// 	i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	if ((res * neg) > MAX_INT || (res * neg) < MIN_INT)
	{
        write(1, "Error\n", 6);
		exit (0);
	}
	return (res * neg);
}
