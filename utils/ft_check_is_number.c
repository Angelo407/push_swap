/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_is_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:22:03 by aprosper          #+#    #+#             */
/*   Updated: 2022/08/01 14:04:53 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

int ft_check_is_number(t_array *array, char **str)
{
    int i;
    
    i = 0;
    while (i < (array->size_a * 2) - 1)
    {
        if (str[1][i] == '\0')
            i++;
        if (str[1][i] == '+' || str[1][i] == '-')
            str[1][i] = str[1][i + 1];
        if (!(str[1][i] >= '0' && str[1][i] <= '9'))
        {
            write(1, "Error\n", 6);
            exit (0);
        }
        i++;
    }
    return (0);
}
