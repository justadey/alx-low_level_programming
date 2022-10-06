#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point multiply 2 numbers as arguements
 * @argc: argument count
 * @argv: arguement vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", mul);

	return (0);
}
