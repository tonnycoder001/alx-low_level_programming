#include <stdio.h>
/**
  * main - the entry point to the program
  *
  * Return: returns 0 if program is successful
  */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
