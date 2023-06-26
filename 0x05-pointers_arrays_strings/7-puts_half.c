#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string
 *
 */

void puts_half(char *str)
{
	int a, n, lng = 0;

	for(a = 0; str[a] != '\0'; a++)
		lng++;

	n = (lng / 2);

	if ((lng % 2) != 0)
		n = ((lng + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
