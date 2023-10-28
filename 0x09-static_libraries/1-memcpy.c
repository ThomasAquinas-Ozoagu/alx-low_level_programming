/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @src: location to copy from
 *
 * @dest: location to paste
 *
 * @n: number of characters to be copied
 *
 * Return: a pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
