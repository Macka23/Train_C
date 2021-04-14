#include <stdio.h>

int ft_fibonacci(int index)
{
	if (index < 0)
		return(-1);
	if (index == 0)
		return(0);
	else 
		return(index + ft_fibonacci(index - 1));
}

int		main(void)
{
	int index;

	index = 18;
	printf("fibonacci = %d\n", ft_fibonacci(index));
	return(0);
}