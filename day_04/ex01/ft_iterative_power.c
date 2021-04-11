#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int		main()
{
	int nb;
	int power;

	nb = 3;
	power = 2;
	ft_iterative_power(nb, power);
	printf("résultat = %d", result);
	return(0);
}