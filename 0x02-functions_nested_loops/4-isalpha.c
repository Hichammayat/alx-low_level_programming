#include "main.h"
/**
  *_isalpha - checks for alphabetic character
  *Description: checks for alphabetic character
  *@c: caracter in ASCII code
  *Return: 1 if alphabet 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
