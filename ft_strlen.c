# include "push_swap.h"


size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
int main(void)
{
	char	str[] = "salut";
	
	ft_strlen(str);

	printf("%zu\n", ft_strlen(str));
}
*/
