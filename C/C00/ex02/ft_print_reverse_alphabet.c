#include <unistd.h>


void ft_print_reverse_alphabet(void)
{
	char *s = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 25; i > -1; i--)
		write(1, &s[i] , 1);
}
