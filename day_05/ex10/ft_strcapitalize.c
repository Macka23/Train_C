#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		if (i != 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return(str);
}

int		main(void)
{
	char str[] = "OUIUJjshIJ";

	printf("ft_strcapitalize = %s\n", ft_strcapitalize(str));
	return(0);
}