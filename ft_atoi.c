# include "push_swap.h"

int    ft_atoi(char *str)
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
