#include <stdio.h>

int main()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (i == 0 || i == 2 || (i == 1 && j == 0 || j == 11))
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
