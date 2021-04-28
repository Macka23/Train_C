#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		++i;
	}
	if (src[i] == '\0')
	{
		src[i] = dest[j];
		i++;
		j++;
	}
	while (dest[j] != '\0')
	{
		src[i] = dest[j];
		i++;
		j++;
	}
	return(dest);
}

int		main(void)
{
	char *src;
	char *dest;

	src = "src\0";
	dest = "dest\0";
	printf("ft_strcat = %s\n", ft_strcat(dest, src));
	return(0);
}