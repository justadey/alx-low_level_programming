#include "main.h"

/**
 * leet - function that encode a string into integers
 * @str: pointer variable for string
 * Return: str
 */
char *leet(char *str)
{
	int a = 0, l = 5, b;
	char ch[5] = "AEOTL";
	char cd[5] = "43071";

	while (str[a])
	{
		b = 0;
		while (b < l)
		{
			if (str[a] == ch[b] || str[a] - 32 == ch[b])
			{
				str[a] = cd[b];
			}
			b++;
		}
		a++;
	}
	return (str);
}
