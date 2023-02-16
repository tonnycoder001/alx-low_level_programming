#include <stdio.h>
/**
  * main - entry point to the program
  * Return: the function will return a value of 1
  */
int main(void)
{
	int n = 0;
	char st[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (st[n] != '\0')
	{
		putchar(st[n]);
		n++;
	}
	return (1);
}
