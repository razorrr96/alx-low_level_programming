#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int n;

	n = 0;

	while (n < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		n++;
	}
}
