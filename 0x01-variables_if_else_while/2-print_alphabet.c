#include <stdio.h>
/**
  *main - entry point
  *Description: prints the alphabet in lowercase
  *Return: Always 0
  */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
