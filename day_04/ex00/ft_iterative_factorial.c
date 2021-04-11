#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;

	if (nb < 1)
		return (0);
	i = nb;
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}

int		main()
{
	int nb;

	nb = 8;
	ft_iterative_factorial(nb);
	printf("opération = %d\n", nb);
	return(0);
}