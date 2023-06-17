#include <stdio.h>
/**
  *main - entry point
  *Description: all possible different combinations of three digits.
  *Return: always with a zero
  */
int main(void)
{
	int D1 = 0;
	int D2;
	int D3;

	while (D1 <= 9)
	{
		D2 = 0;
		while (D2 <= 9)
		{
			D3 = 0;
			while (D3 <= 9)
			{
				if (D1 != D2 && D1 < D2 && D2 != D3 && D2 < D3)
				{
					putchar(D1 + 48);
					putchar(D2 + 48);
					putchar(D3 + 48);
					if (D1 + D2 + D3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				D3++;
			}
			D2++;
		}
		D1++;
	}
	putchar('\n');

	return (0);
}
