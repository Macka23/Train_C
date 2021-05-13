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
	free(str);
	return(str);
}

int		main(void)
{
	char *src;

	src = "Je suis moche";
	printf("ft_strdup = %s\n", ft_strdup(src));
	return(0);
}