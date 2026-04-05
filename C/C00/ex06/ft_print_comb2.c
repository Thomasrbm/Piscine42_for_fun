#include <unistd.h>

void printer(char c, int current)
{
	c += current;
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int numb1 = 0;
	int numb2 = 0;
	int numb3 = 0;
	int numb4 = 1;

	while (numb1 <= 9)
	{

		while (numb3 <= 9)
		{

			while (numb4 <= 9)
			{
				printer('0', numb1);
				printer('0', numb2);
				write(1, " ", 1);
				printer('0', numb3);
				printer('0', numb4);
				if ((numb1 == 9) && (numb2 == 8) && (numb3 == 9) && (numb4 == 9))
					return ;

				write(1, ", ", 2); 
				numb4++;
			}
			numb3++;
			if ((numb3 == 10) && (numb4 == 10) && (numb2 != 9) && (numb1 != 0))
			{
				numb3 = numb1;
				numb2++;
				numb4 = numb2 + 1;
				continue;
			}
			if ((numb2 == 9) && (numb3 == 10) && (numb4 == 10))
				break;
			numb4 = 0;
		}
		if ((numb2 == 9) && (numb3 == 10) && (numb4 == 10))
		{
			numb1++;
			numb3 = numb1;
			numb2 = 0;
			numb4 = 1;
		}
		else if (numb2 == 9)
		{
			numb2 = 0;
			numb1++;
		}
		else 
			numb2++;


		if (numb4 == 9)
		{
			numb4 = 0;
			numb3++;
		}
		else if (numb2 != 0 && numb4 != 1)
		{
			numb4 = numb2 + 1;
			numb3 = 0;
		}
	}
}



// int main()
// {
// 	ft_print_comb2();
// 	return 0;
// }