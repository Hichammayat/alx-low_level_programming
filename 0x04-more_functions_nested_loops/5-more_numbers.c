#include "main.h"
/**
  *more_numbers -  prints 10 times the numbers, from 0 to 14
  *Return: always a 0
  */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(49);
			}
		_putchar(j % 10 + 48);
		}
		_putchar('\n');
	}
}
