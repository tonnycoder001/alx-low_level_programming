#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: the destination string
  * @src: pointer to the  string to be appended at the end of dest
  *
  * Return: a pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	/* determining the end of the first string */
	char *a;
	char *b;

	a = dest;
	b = src;

	while (*a != '\0')
	{
		a++;
	}

	/* concatenating the second string */

	while (*b != '\0')
	{
		*a = *b;
		a++;
		b++;
	}

	/* adding the null terminator */
	*b = '\0';

	return (dest);
}
