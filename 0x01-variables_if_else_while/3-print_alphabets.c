#include <stdio.h>

/**
 * main - lowercase and uppercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;
	for (c ='a'; c <='z'; c++)
	{
		putchar(c);
	}
	for (c ='A'; c <='Z'; c++)
	{
		putchard(c);
	}

	putchard('\n');

	return (0);
}

