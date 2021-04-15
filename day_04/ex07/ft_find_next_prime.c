#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;
	
	i = 2;
	if (nb <= 1)
		return(0);
	if (nb == 2)
		return(nb);
	while (i < nb)
	{
		if (nb % i == 0)
			return(0);
		i++;
	}
	return(nb);
}

int		ft_find_next_prime(int nb)
{
	int newnb;

	newnb = nb;
	if (ft_is_prime(newnb) != 0)
		newnb++;
	while (ft_is_prime(newnb) == 0)
		newnb++;
	return(newnb);

	
}


int		main(void)
{
	int nb;

	nb = 41;
	printf("%d\n", ft_find_next_prime(nb));
	return(0);
}