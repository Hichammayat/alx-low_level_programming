#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int A = 0;
	int C = 0;

	while (*(src + A) != '\0')
	{
		A++;
	}
	for ( ; C < A ; C++)
	{
		dest[C] = src[C];
	}
	dest[A] = '\0';
	return (dest);
}

