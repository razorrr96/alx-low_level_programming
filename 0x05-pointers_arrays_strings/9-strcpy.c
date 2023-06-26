#include "main.h"
/**
 * char *_strcpy - copy strings
 * @dest: destination
 * @src: source
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for ( ; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
