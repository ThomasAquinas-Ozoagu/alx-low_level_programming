#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: string 1
 *
 * @s2: String 2
 *
 * @n: Number of bytes from string 2 to be used
 *
 * Return: point to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, m;
	char *comb;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (m = 0; s1[m]; m++)
		;
	for (i = 0; s2[i]; i++)
		;
	if (n > i)
		n = i;

	comb = malloc(sizeof(s1) + sizeof(s2) + 1);
	if (!comb)
		return (NULL);

	for (j = 0; j < m; j++)
		comb[j] = s1[j];

	for (k = 0; k < n; k++)
		comb[j + k] = s2[k];

	comb[j + k] = '\0';
	return (comb);
}
