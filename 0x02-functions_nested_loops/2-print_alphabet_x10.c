#include"main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int count, ch;

	for (count = 0; count <= 10; count++)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
