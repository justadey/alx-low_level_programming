#include "main.h"

/**
 * reverse_array - function to reverse the content of an
 * array of integers
 * @a: pointer
 * @n: variable
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int index, tmp;

	index = 0;
	n = n - 1;

	for (index = 0; index < n; index++)
	{
		tmp = a[index];
		a[index] = a[n];
		a[n] = tmp;
		n--;
	}
}
