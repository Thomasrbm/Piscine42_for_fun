#include <unistd.h>
#include <stdio.h>


// entre 1 et 9

void write_all(int *nb, int n)
{
	int i = 0;
	char c;

	while (i < n)
	{
		c = nb[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, ", ", 1);
}

void ft_print_combn(int n)
{
	int nb[n];
	int len = 0;


	while (len < n)
	{
		nb[len] = len;
		printf("%d\n", nb[len]);
		len++;
	}

	int last_nb = len;

	while (nb[last_nb] < 9)
	{
		
		write_all(nb, n);
		last_nb ++;
	}
}



// regle 2 : n1 + 1   n2 = n1 + 1.     si last = 9


//  3 = n2
// 9  = n8 + 1

int main()
{
	ft_print_combn(3);
	return 0;
}