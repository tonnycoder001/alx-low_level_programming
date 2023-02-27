#include "main.h"

/**
  * _strcpy - copies a string to the destination
  * @dest: the destination string
  * @src: the source string
  *
  * Return: return a pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	char *a;
	char *b;

	a = dest;
	b = src;

	while (*b != '\0')
	{
		*a = *b;
		a++;
		b++;
	}
	*a = '\0';
	return (dest);
}
