#include "main.h"

/**
 * cap_string - function to capitalise first letters
 * @s: pointer string for the function
 * Return: s
 */
char *cap_string(char *s)
{
	char spr[] = {32, 9, 46, ',', '\n', ';', '!', '?', '"', '(', ')', '{', '}'};
	int x = 0, i;
	int len = 13;

	while (s[x])
	{
		i = 0;
		while (i < len)
		{
			if ((x == 0 || s[x - 1] == spr[i]) && (s[x] >= 97 && s[x] <= 122))
			{
				s[x] -= 32;
			}
			i++;
		}
		x++;
	}
	return (s);
}
