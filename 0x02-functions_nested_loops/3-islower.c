/**
 * _islower - checks for lowercase character.
 *
 * @c: integer variable to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)


{
	if (c < 65 || c > 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
