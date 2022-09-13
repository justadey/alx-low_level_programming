#include "main.h"
#include "holberton.h"
/**
 *  * print_alphabet - print alphabet
 *   *
 *    * Return: void
 *     */
void print_alphabet(void)
{
		int ch = 'a';

			while (ch <= 'z')
					{
								_putchar(ch);
										ch++;
											}
				_putchar('\n');
}
