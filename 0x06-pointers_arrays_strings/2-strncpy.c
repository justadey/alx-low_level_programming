#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: string destination pointer
 * @src: string source pointer
 * @n: n-bytes size
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];

	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
