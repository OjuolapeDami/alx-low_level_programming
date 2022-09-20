#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int oju;

	oju = *a;
	*a = *b;
	*b = oju;
}
