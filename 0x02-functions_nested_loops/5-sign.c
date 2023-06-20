#include "main.h"
/**
  *print_sign - that prints the sign of a number.
  *Description: prints the sign of a number.
  *@n: caracter in ascii code
  *Return: 0 if 0 1 if positiv ense -1
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
