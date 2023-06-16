#include <stdio.h>
/**
  *main - entry point
  *Description: in lowercase, and then in uppercase
  *Return: Always with 0
  */
int main(void)
{
	int c = 97;
	int b = 65;

	while (c <= 122)
	{
		putchar(c);
	}
	while (b <= 90)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
