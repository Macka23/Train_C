#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;
	int add;

	i = 0;
	result = 0;
	if (nb < 1)
		return (0);
	while (i <= nb)
	{
		add = nb * (i + 1);
		result = result + add;
		i++;
	}
	return(result); 
}

int		main()
{
	int nb;

	nb = 9;
	printf("opération = %d\n", ft_iterative_factorial(nb));
	return(0);
}

// result = 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 