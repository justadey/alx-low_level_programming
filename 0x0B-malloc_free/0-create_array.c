#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: size of the array
 * @c: Character to insert
 * Return: NULL if size is zero or if it fails.
 * pointer to arrat if everything is normal.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	arrat = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		arrat[index] = c;
	return (array);
}
