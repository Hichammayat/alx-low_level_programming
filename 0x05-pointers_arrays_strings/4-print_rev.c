#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int L = 0;
	int o;

	while (*s != '\0')
	{
		L++;
		s++;
	}
	s--;
	for (o = L; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

