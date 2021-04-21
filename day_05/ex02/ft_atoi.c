#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i;
	int result;
	int neg;

	neg = 1;
	i = 0;
	result = 0;

	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\n' || str[i] == '\n' 
    || str[i] == '\r' || str[i] == '\v'))
		i++;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + (str[i] - '0');
		i++;
	}

	return (result * neg);

}

int		main(void)
{
	char *ligne;

	ligne = "+-89654oui\0";
	printf("ft_atoi = %d\n", ft_atoi(ligne));

	printf("ft_atoi_real = %d\n", atoi(ligne));
	return(0);
}