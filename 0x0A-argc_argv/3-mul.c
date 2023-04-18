#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints multiplication of two args
 *
 * @argc: argument counter
 * @argv: array pointer to arguments
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
