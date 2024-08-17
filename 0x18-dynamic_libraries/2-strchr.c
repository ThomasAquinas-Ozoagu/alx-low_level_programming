/**
 * _strchr - locates a character in a string.
 *
 * @s: The string to be searched
 *
 * @c: the character to find
 *
 * Return: A pointer to the character
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (0);
}
