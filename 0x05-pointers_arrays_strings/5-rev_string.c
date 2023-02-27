#include "main.h"

/**
  * rev_string - it reverses a string
  * @s: the string to be reversed
  *
  * Return: nothing
  */

void rev_string(char *s)
{
	int n, k, j, m;
	char s_2[2000];

	n = 0;

	while (*(s + n) != '\0')
	{
		s_2[n] = *(s + n);
		n++;
	}


	k = (n - 1);

	for (j = 0; j <= k; j++)
	{
		m = k - j;
		*(s + j) = *(s_2 + m);

	}
}
