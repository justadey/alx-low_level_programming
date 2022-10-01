#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds posistive numbers
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}

		}

		sum += atoi(argv[num])
	}

	printf("%d\n", sum);
	return (0);
}
		}

		count++;
	}
	return (1);
}
