#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;
	int add;

	i = 1;
	add = nb;
	if (power < 0)
		return(0);
	if (power == 0)
		return(1);
	if ( power == 2)
		return(nb * nb);
	while (i < power)
	{
		result = add * nb;
		add = result;
		i++;
	}
	return(add);
}

int		main(void)
{
	int nb;
	int power;

	nb = 12;
	power = 2;
	printf("résultat = %d\n", ft_iterative_power(nb, power));
	return(0);
}