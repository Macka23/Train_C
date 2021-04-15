#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;
	
	i = 2;
	if (nb == 0 || nb == 1)
		return(0);
	if (nb == 2)
		return(1);
	while (nb % i != 0)
	{
		if (nb % i == 0 && i != nb)
			return(0);
		else
			return(1);
		i++;
	}
}

int		main(void)
{
	int nb;

	nb = 2;
	if (ft_is_prime(nb) == 1)
		printf("Le nombre %d est premier.\n", nb);
	else
		printf("Le nombre %d n'est pas premier.\n", nb);
	return(0);
}