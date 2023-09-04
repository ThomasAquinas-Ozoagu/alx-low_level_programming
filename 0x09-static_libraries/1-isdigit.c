/**
 * _isdigit - checks if the parameter is a digit or not
 *
 * @c: the parameter that we want to check
 *
 * Return: Return 0 if false, 1 if true
 *
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
