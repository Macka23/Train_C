#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		++i;
	}
	return (1);
}

int		main(void)
{
	char str[] = "zdjapojd21513qds";

	printf("ft_str_is_alpha = %d\n", ft_str_is_alpha(str));
	return(0);
}