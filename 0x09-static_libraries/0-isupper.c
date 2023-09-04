/**
 * _isupper - checks the case of a char
 *
 * @c: the char whose case we want to check, in the form of an integer
 *
 * Return: Return 0 if lower case, 1 if upper case
 *
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
