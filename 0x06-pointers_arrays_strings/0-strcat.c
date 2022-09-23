#include "main.h"

/**
 * _strcat - function to concatenates two strings
 * @dest: pointer for destination
 * @src: pointer for the source
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, j = 0;

	while (dest[j++])
		len++;

	for (j = 0; src[j]; j++)
		dest[len++] = src[j];

	return (dest);
}
