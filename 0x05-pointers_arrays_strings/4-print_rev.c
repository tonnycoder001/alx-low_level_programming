#include "main.h"

/**
  * print_rev - print a string in reverse order
  * @s: The string to be printed
  *
  * Return: nothing
  */

void print_rev(char *s)
{
	/* Get the string length */
	int i, n;

	n = 0;

	while (*(s + n) != 0)
	{
		n++;
	}

	i = n;

	while (i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

