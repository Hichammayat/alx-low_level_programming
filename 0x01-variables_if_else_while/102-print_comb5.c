#include <stdio.h>
/**
  *main - Entry main
  *Description: The numbers should range from 0 to 99
  *Return: Always with a zero
  */
int main(void)
{
	int D1 = 0;
	int D2;

	while (D1 <= 98)
	{
		D2 = D1 + 1;
		while (D2 <= 99)
		{
			putchar(D1 / 10 + 48);
			putchar(D1 % 10 + 48);
			putchar(' ');
			putchar(D2 / 10 + 48);
			putchar(D2 % 10 + 48);
			if (D1 != 98)
			{
				putchar(',');
				putchar(' ');
			}
			D2++;
		}
		D1++;
	}
	putchar('\n');
	return (0);
}
