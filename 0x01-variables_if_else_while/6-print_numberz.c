#include <stdio.h>
/**
  * main -entry point for the program
  * Return: returns a value of 0 if program is successful
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
