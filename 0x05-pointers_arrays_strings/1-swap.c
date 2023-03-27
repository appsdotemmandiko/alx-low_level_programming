/**
 * swap_int - swaps the values of two integers
 *		in parameters
 *
 * @a: first input parameter
 * @b: second input parameter
 *
 * Return: None
*/

void swap_int(int *a, int *b)
{
	int relay;

	relay = *a;
	*a = *b;
	*b = relay;
}
