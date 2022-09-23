#include "main.h"

/**
 * _strcat -> this s a function strcat
 * @dest: first param
 * @src: second param
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0 ;

	while (dest[i++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] = src[i];
	
	return (dest);
}
