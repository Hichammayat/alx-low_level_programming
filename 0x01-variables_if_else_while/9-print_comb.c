#include <stdio.h>
/**
  *main - entry point
  *Description: all possible combinations of single-digit numbers
  *Return: always with a 0
  */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
