#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char *str;
	int i;
	int count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	str = malloc(sizeof(*str) * (count + 1));
	while (i < count)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}

int		main(void)
{
	char *src;
	char *stack;

	src = "Je suis moche";
	stack = ft_strdup(src);
	printf("ft_strdup = %s\n", stack);
	free(stack);
	return(0);
}