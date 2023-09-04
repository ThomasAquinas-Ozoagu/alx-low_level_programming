/**
 * _memset - fills n bytes of memory area pointed to by s with constant byte b
 *
 * @s: the pointer
 *
 * @b: The constant byte
 *
 * @n: number of bytes
 *
 * Return: pointer to the modified memory
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
