#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the calling file own name
 *
 * @argc: argument counter
 * @argv: array pointer to arguments
 *
 * Return: Always 0 (Success)
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
