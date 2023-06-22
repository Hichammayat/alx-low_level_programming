#include "main.h"
/**
  *print_most_numbers - Do not print 2 and 4
  *@i: number
  *Return: always 0
  */
void print_most_numbers(int i)
{
	int i = 48;

	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}


