/**
 * _strstr - locates a substring
 *
 * @haystack: String to be searched
 *
 * @needle: The string to look for
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int g, h, i;
	int j;
	int k = 0;
	int l = 0;

	for (g = 0; needle[g] != '\0'; g++)
		h++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < h; j++)
		{
			if (haystack[i] == needle[j])
				k++;
			else
				k = 0;
			if (k == 1)
				l = i;
			if (k == h)
				break;
		}
	}
	return (haystack + l);
}
