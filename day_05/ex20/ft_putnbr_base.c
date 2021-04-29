#include <unistd.h>
#include <stdio.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int		check_base(char *base)
{
	if (base == "0123456789")
		return(0);
	if (base == "01")
		return(1);
	if (base == "0123456789ABCDEF")
		return(2);
	if (base == "poneyvif")
		return(8);
}

void	ft_putnbr_base(int n, char *base)
{
	if (check_base(base) == 0)
		ft_putnbr(n);
	if (check_base(base) == 1)

}

int		main(void)
{
	char *base;
	int n;

	base = "0123456789";
	n = 36;
	ft_putnbr_base(n, base);
	return(0);
}