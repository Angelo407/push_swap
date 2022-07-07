# include "push_swap.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst[] = "EFGHI";
	char	src[] = "1234";

//char *src = "ABCD";
//char dst = src[2];

//	printf("%s\n", memmove(dst, src, 3));
//	printf("%s\n", memcpy(dst, src, 3));

	printf("%s\n", (char *)ft_memmove(dst, src, 2));
//	ft_memmove(dst, src, 3);

	return (0);
}
*/
