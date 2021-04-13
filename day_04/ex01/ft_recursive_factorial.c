#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return(1);
	else
		return(nb * ft_recursive_factorial(nb - 1));
}

int		main(void)
{
	int nb;
	int i;

	nb = 3;
	printf("opération avec récursive = %d\n", ft_recursive_factorial(nb));
	return(0);
} 