#include "main.h"

/**
 * print_number - main function to print integer
 * @n: function parametr name as variable
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
