#include <unistd.h>

void     ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
	char nb1 = '0';
	char nb2 = '0';
	char nb3 = '0';
	char nb4 = '0';

	while(nb3 <= '9')
	{
		nb4 = '0';
		while(nb4 <= '9')
		{
			ft_putchar(nb3);
			ft_putchar(nb4);
			if(nb3 != '9' && nb4 != '9')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nb4++;
		}
		nb3++;
	}
}

int		main()
{
	ft_print_comb2();
	return(0);
}