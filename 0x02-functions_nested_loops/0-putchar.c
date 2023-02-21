#include "main.h"

/**
  * main - entry point to program
  *
  * Return: On success 0
  */
int main(void)
{
	char mychar[] = "_putchar";
	int n;

	for (n = 0; n <= 7; n++)
	{
		_putchar(mychar[n]);
	}
	_putchar('\n');
	return (0);
}
