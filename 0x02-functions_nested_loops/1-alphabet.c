#include "main.h"
/**
  *print_alphabet - entry point
  *Description: the alphabet, in lowercase
  *Return: always with 0
  */
void print_alphabet(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
