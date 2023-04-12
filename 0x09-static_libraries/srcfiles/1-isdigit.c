/**
 * _isdigit - checks for numerical val
 *
 * @c: input param for assessment
 *
 * Return: 1 if numerical, 0 if not
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
