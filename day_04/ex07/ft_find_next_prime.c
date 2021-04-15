#include <stdio.h>

int		ft_find_next_prime(int nb)
{
	int i;
	int j;
	int add_nb;

	add_nb = nb++;
	j = 2;
	i = 2;
	while(add_nb % j != 0)
	{
		add_nb++;
		if (add_nb == 0 || add_nb == 1)
			return(0);
		if (add_nb == 2)
			return(1);
		while (add_nb % i != 0)
		{
			if (add_nb % i == 0 && i != add_nb)
				return(0);
			else
				return(1);
			i++;
		}
	}
	return(0);
}

int		main(void)
{
	int nb;

	nb = ;
	printf("%d\n", ft_find_next_prime(nb));
	return(0);
}