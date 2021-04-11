#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int		main()
{
	char *ligne;
	int nb;

	ligne = "Je suis bogosse";
	nb = ft_strlen(ligne);
	printf("countChar = %d\n", nb);
	return(0);
}