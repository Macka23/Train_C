#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *a / *b;
	*b = swap % *b;
}

int		main()
{
	int a;
	int b;

	a = 4;
	b = 2;
	printf("a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div = %d, reste = %d\n", a, b);
	return(0);
}