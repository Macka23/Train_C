#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (n != 0)
		dest[i + j] = '\0';

	return(dest);
}

int		main(void)
{
	char src[] = "src";
	char dest[] = "dest";
	unsigned int n = 0;

	printf("ft_strcat = %s\n", ft_strncat(dest, src, n));
	return(0);
}