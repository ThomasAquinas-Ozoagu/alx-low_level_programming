/**
 * _strlen_recursion - measures the lenght of a string
 *
 * @s: The string whose lenght we wish to establish
 *
 * Return: The lenght of the string
 *
 */

int _strlen_recursion(char *s)
{
	int k = 0;

	if (s[0])
	{
		k += 1;
		k += _strlen_recursion(s + 1);
	}
	return (k);
}
