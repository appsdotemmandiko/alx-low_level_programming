#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: argument counter
 * @argv: array pointer to arguments
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i = 0;

	for ( ; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
