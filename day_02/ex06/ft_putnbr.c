#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		nb = -nb;
	if (nb >= 10)
	{
		nb = nb / 10;
		nb = nb % 10;
	}
	else
		ft_putchar(nb + '0');
}

int		main(void)
{
	int nb;

	nb = 86;
	ft_putnbr(nb);
	return(0);
}