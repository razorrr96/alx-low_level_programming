#include <stdio.h>
/**
 * main - Entry point test2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int o = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (o <= 90)
	{
		putchar(o);
		o++;
	}
	putchar('\n');
	return (0);
}
