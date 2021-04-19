#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int moins;
	int result;

	i = 0;
	moins = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\n' || str[i] == '\n' 
    || str[i] == '\r' || str[i] == '\v'))
	{
		i++;
	}
	if (str[i] = "-")
	{
		moins = -1;
		i++;
	}
	if (str[i] = '+')
		i++;
	while (str[i] != '\0')
	{
		result = result * 10;
		result = result + (str[i] - '0');
		i++;
	}
	return(result * moins);


}

int		main(void)
{
	char *ligne;

	ligne = "-+85oui85412";
	printf("ft_atoi = %d\n", ft_atoi(ligne));
	return(0);
}