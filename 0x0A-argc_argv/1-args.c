#include <stdlib.h>
#include <stdio.h>

/**
 * main -prints number of arguments passed to it
 *
 * @argc: argument counter
 * @argv: array pointer to arguments
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
