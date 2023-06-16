#include <stdio.h>
/**
  *main - entry main
  *Description: prints the lowercase alphabet in reverse1
  *Return: alwyas with a 0
  */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
