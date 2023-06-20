#include <stdio.h>
/**
 * main - Entry point test3
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			k = j * i;
			if(j == 0)
			{
				putchar(k + '0');
			}
			else if (k < 10 && j != 0)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(k + '0');
			}
			else if (k >= 10)
			{
				putchar(',');
				putchar(' ');
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
			}
		}
		putchar('\n');
	}
}
