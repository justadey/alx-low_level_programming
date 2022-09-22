#include "main.h"

/**
 * strcat -> this s a function strcat
 * @dest: first param
 * @src: second param
 *
 * Return: a string
 */
char *strcat(char *dest, const char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i]; != '\0' ; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
