#include "main.h"
/**
 * main - Entry point test3
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int a = n % 10;

	if(n < 0)
		n = -n;
	if(a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
