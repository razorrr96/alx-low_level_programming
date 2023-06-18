#include <stdio.h>
/**
 * main - Entry point test2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m, n, o;
	for (m = 48; m <= 57; m++)
	{
		for (n = 49; n <= 57; n++)
		{
			for (o = 50; o <= 57; o++)
			{
				if (o > n && n > m)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					if (m != 55 || n != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
