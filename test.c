int ft_add(int *nb)
{
	*nb += 1;
	return (*nb);
}

int	ft_mult(int *nb)
{
	*nb *= 2;
	return (*nb);
}

#include <stdio.h>

int	main(void)
{
	int i;
	int	result;
	int	result2;

	i = 5;
	result = ft_add(&i);
	result2 = ft_mult(&i);
	printf("%d\n", result);
	printf("%d\n", i);
	printf("%d\n", result2);
	printf("%d\n", i);
}
