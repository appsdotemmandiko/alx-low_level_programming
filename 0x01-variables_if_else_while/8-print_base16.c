#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x = 48; /*0; in decimal */

	while (x <= 102) /*f in decimal*/
	{
		putchar(x);

		if (x == 57)
			x += 39;
		++x;
	}
	putchar('\n');

	return (0);
}
