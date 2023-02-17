#include <stdio.h>
/**
  * main - the entry point for the program
  * Return: returns a value of zero if the program is successful
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
