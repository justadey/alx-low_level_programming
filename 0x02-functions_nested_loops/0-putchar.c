#include "holberton.h"
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char string[] = "Holberton\n";
	
	for (i = 0; i <= 9; i++)
	{
		_putchar(string[i]);
	}

	return (0);
}
