/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:57:21 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 13:59:06 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(char *str)
{
	int			i;
	int			sign;
	long long	value;

	i = 0;
	sign = 1;
	value = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i])
		value = value * 10 + (str[i++] - '0');
	value = value * sign;
	if (value > MAX_INT || value < MIN_INT)
	{
		write(1, "Error\n", 6);
		exit (0);
	}
	return (value);
}

int	ft_atoi_origin(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
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
	return (res * neg);
}

/*
int	main(void)
{
//	const	char *str = "-23456";  	
	const	char *str2 = "-23456";
													
//	printf("atoi :str = %d\n", atoi(str));

	printf("ft_atoi :str2 = %d\n", ft_atoi(str2));
	
	return (0);
}
*/
