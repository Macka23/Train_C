#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i = 0;
	int *tab;

	if (min >= max)
		return(0);
	tab = (int *)malloc((max - min + 1) * sizeof(int));
	while (i < max - min)
	{
		tab[i] = i + min;
		i++;
	}
	return(tab);
}

int		main(void)
{
	int min = 2;
	int max = 5;
	int *stack;

	stack = ft_range(min, max);
	for (int i = 0; i < (max-min); ++i)
	{
		printf("ksks= %d\n", stack[i]);
	}
	free(stack);
	return(0);
}