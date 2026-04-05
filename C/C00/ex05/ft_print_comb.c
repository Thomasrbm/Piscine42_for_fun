#include <unistd.h>

void printer(char c, int current)
{
	c += current;
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	int a = 0;
	int b;
	int c;

	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				if ((a == b) || (b == c) || (c == a) || (c < b) || (b < a))
				{
					c++;
					continue;
				}
				printer('0', a);
				printer('0', b);
				printer('0', c);
				c++;
				if ((a == 7) && (b == 8) && (c != 9))
					break;
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
