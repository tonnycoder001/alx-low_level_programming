#include "main.h"

/**
  * swap_int - swapping the value of two integers
  * @a: The first integer pointer
  * @b: The second integer pointer
  *
  * Return: nothing
  */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
