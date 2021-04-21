#include <stdio.h>

char 	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] < '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);

}

int		main(void)
{
	char *ligne;
	char *dest;

	ligne = "Oui";
	dest = "0";
	printf("ft_strcpy = %d\n", ft_strcpy(dest, ligne));
	return(0);
}