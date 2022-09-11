#include <stdio.h>
/**
 * main - print possible combo of 3
 *
 * Return: returns zero at the end
 */
int main(void)
{
	int i, p, m;
	for (i = 0; i <= 9; i++)
	{
		for (m = 2; m<= 9; m++)
		{
			if (m > p && p > i)
			{
				putchar(i + '0');
				putchar(p + '0');

