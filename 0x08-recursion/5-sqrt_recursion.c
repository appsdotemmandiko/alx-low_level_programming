/**
 * _sqrt_recursion_yenyewe - function with recursion bit
 *
 * @n : input number
 * @min: minimum number
 * @max: maximum number
 *
 * Return: square root of @n or -1
*/
int _sqrt_recursion_yenyewe(int n, int min, int max)
{
	int a, a_squared;

	a = (min + max) / 2;
	a_squared = a * a;

	if (a_squared == n)
		return (a);
	else if (min == max)
		return (-1);
	else if (a_squared < n)
		return (_sqrt_recursion_yenyewe(n, a + 1, max));
	else
		return (_sqrt_recursion_yenyewe(n, min, a - 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 *
 * @n: input number
 *
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n == 1)		/*sqrt(1) == 1*/
		return (1);
	else if (n == 0)	/*sqrt(0) == 0*/
		return (0);
	else if (n < 0)		/*sqrt(-n) == -1 (NA)*/
		return (-1);
	else
		return (_sqrt_recursion_yenyewe(n, 1, n));
}
