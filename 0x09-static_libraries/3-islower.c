#include "main.h"
/**
  *_islower - checks for lowercase character
  *Description: checks for lowercase character.
  *Return: 1 for lowecase 0 else
  *@c: the caracter in ascci code
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
