#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i < nb)
	{
		if (i * i == nb)
			return(i);
		i++;
	}
	return(0);
}


int		main(void)
{
	int nb;

	nb = 6;
	if (ft_sqrt(nb) != 0)
		printf("La racine carrée de %d est %d.\n", nb, ft_sqrt(nb));
	else
		printf("La racine carrée de %d est un chiffre à virgule.\n", nb);
	return(0);
}