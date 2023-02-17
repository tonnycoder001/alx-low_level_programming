#include <stdio.h>
/**
  * main - entry point to the program
  * Return: returns 0 if the program is successfully executed
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
