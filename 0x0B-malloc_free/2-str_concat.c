#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: pointer to the result
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *s3;
	int m = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	s3 = malloc((i + j + 1) * sizeof(char));

	for (k = 0; k < i; k++)
		s3[k] = s1[k];

	for (l = 0; l < j; l++)
	{
		s3[k + l] = s2[l];
		if (s3[k + l] != s2[l])
			m = 1;
	}

	s3[i + j] = '\0';

	if (m > 0)
		return (NULL);

	return (s3);
}
