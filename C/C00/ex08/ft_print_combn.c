#include <unistd.h>
#include <stdio.h>


// entre 1 et 9

void ft_print_combn(int n)
{
	int nb[n];
	int len = 0;


	while (len < n)
	{
		nb[len] = len;
		printf("%d\n", nb[i]);
		len++;
	}
}



// regle 2 : n1 + 1   n2 = n1 + 1.     si last = 9


//  3 = n2
// 9  = n8 + 1

int main()
{
	ft_print_combn(9);
	return 0;
}