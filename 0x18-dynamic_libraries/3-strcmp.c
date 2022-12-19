#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 == s2. negative number if s1 < s2
 * or positive numver if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
