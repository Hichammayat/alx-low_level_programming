#include <stdio.h>
/**
  *main - entry point
  *Description:  all possible different combinations of two digits.
  *Return: always with 0
  */
int main(void)
{
	int D1 = 0;
	int D2;

	while (D1 <= 9)
	{
		D2 = 0;
		while (D2 <= 9)
		{
			if (D1 != D2 && D1 < D2)
			{
				putchar(D1 + 48);
				putchar(D2 + 48);
				if (D1 + D2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			D2++;
		}
		D1++;
	}
	putchar('\n');

	return (0);
}
