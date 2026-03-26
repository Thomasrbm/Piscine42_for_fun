#include <unistd.h>
#include <stdio.h>

void print(char c, int a)
{
	c += a;
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long nbr = nb;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 12);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > 10)
		ft_putnbr(nbr / 10);
	print('0', nbr % 10);
}
