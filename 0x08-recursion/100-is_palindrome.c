int palindrome_recursion(char *s, int n);
int count_recursion(char *str);


#include <stdio.h> /* REMOVE */
#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * and 0 if not..
 *
 * @s: The string to be checked
 *
 * Return: 0 if not a palindrome
 *
 */

int is_palindrome(char *s)
{

	int i;

	/* Count characters in the string */
	i = count_recursion(s);
/*	printf("\n\n\nThere are %d xters\n", i); */

	/* Check if string is empty */
	if (i == 0)
		return (0);

	/* Check if string is a palindrome */
	/*j = i / 2;*/
	  /*k = i % 2;*/

	return (palindrome_recursion(s, i));
}



#include "main.h"
#include <stdio.h> /* REMOVE */
/**
 * palindrome_recursion - checks if a word or phrase is the same
 * when read in reverse
 *
 * @s: The string whose lenght we wish to establish
 *
 * @n: lenght of string
 *
 * Return: The lenght of the string
 *
 */

int palindrome_recursion(char *s, int n)

{
	/*      printf("%d\n", n); */
	if (n > 0)
	{
/*		printf("%c is equal  to %c before \n", s[0], s[n - 1]); */
		if (s[0] == s[n - 1])
		{
/*			printf("%c is equal  to %c now \n", s[0], s[n - 1]); */
			n -= 1;
/*			printf("%c is equal  to %c after\n", s[0], s[n - 1]); */
			return (palindrome_recursion(s + 1, n - 1));
		}
		else
			return (0);

	}

	return (1);
}

/**
 * count_recursion - measures the lenght of a string
 *
 * @s: The string whose lenght we wish to establish
 *
 * Return: The lenght of the string
 *
 */

int count_recursion(char *s)
{
	int k = 0;

	if (s[0])
	{
		k += 1;
		k += count_recursion(s + 1);
	}
	return (k);
}
