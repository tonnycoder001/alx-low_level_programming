#include "main.h"
#include <stdio.h>

/**
  * print_array - prints the first elements of the array
  * @a: The pointer of the array
  * @n: The number of elements to be printed
  *
  * Return: nothing.
  */

void print_array(int *a, int n)
{
	int j, k;

	k = (n - 1);
	for (j = 0; j <= k; j++)
	{
		if (j != k)
		{
			printf("%d, ", *(a + j));
		}
		else
		{
			printf("%d", *(a + j));
		}
	}
	printf("\n");
}
