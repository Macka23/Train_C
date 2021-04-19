#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	char *ligne;

	ligne = "Oui";
	ft_putstr(ligne);
	return(0);
}