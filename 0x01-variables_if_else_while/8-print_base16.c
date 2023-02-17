#include <stdio.h>
/**
  * main - entry point to the program
  * Return: returns 0 if program is successfully run
  */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
