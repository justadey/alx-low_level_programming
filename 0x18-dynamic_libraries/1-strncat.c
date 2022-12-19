#include "main.h"

/**
 * _strncat - function to concatenate two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: n byte for src
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, j = 0;

	while (dest[j++])
		dest_len++;

	for (j = 0; j < n && src[j]; j++)
		dest[dest_len++] = src[j];

	return (dest);
}
