#include"main.h"

/**
 * print_to_98 - prints n to 98 in order
 *           separated by comma, followed
 *           by space
 *
 * @n: input param
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d, ", count);
	else
		for (count = n; count < 98; ++count)
			printf("%d, ", count);
	printf("98\n");
}
