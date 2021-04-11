#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char i = 'z';

	while(i >= 'a' && i <= 'z')
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
}

int		main()
{
	ft_print_reverse_alphabet();
	return(0);
}