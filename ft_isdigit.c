# include <stdio.h>

int	ft_isdigit(int nbr)
{
	if (nbr >= 48 && nbr <= 57)
	{
		return (1);
	}
	else
		return (0);
}


// int	main(void)
// {
// 	int	d = 'z';
// 	printf("d = %c\n", d);
// 	printf("%d", ft_isdigit(d));
// }