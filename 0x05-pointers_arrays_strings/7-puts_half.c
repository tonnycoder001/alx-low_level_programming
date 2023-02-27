#include "main.h"

/**
  * puts_half - prints half string or last n values
  * @str: the string to be used
  *
  * Return: nothing.
  */

void puts_half(char *str)
{
	int j, n, k;

	n = 0;

	while (*(str + n) != '\0')
	{
		n++;
	}

	if (n % 2 == 0)
	{
		j = n / 2;
		for (k = j; k <= (n - 1); k++)
		{
			_putchar(*(str + k));
		}
	}
	else
	{
		j = (n - 1) / 2;
		for (k = (j + 1); k <= (n - 1); k++)
		{
			_putchar(*(str + k));
		}
	}
	_putchar('\n');
}
