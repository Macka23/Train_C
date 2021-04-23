#include <stdio.h>

char 	*ft_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);

}

int		main(void)
{
	char ligne[3] = "Oui";
	char dest[3] = "Non";
	char *result = ft_strcpy(dest, ligne);

	printf("ft_strcpy = %s\n", result);
	return(0);
}