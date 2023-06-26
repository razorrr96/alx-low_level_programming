#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: input 1
 * @b: input 2
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
