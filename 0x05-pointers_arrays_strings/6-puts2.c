#include "main.h"

/**
  * puts2 - printing every other number
  * @str: the string to be used
  *
  * Return: nothing
  */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
