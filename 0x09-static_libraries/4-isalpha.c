/**
 * _isalpha - checks for alphabet character.
 *
 * @c: integer variable to be checked.
 *
 * Return: 1 if c is an alphabet, 0 otherwise.
 */

int _isalpha(int c)


{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
