#include <stdio.h>
/**
  *main - entry point
  *Description: printss all single digit numbers of base 10 starting from 0
  *Return: Always with a 0
  */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
