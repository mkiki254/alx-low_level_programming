#include "main.h"
#include <stdio.h>

int is_palindrome_check(char *s, int first, int last);
/**
 * is_palindrome - checks whether a string is a palindrome
 * or not
 * @s: the string
 *
 * Return: returns 1 when string is palindrome and
 * 0 when string is not
 */
int is_palindrome(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (is_palindrome_check(s, 0, count - 1));
}

/**
 * is_palindrome_check - does the actual checking
 * @s: the string
 * @first: the first index
 * @last: the last index
 *
 * Return: returns 1 when string is palindrome and
 * 0 when string is not
 */
int is_palindrome_check(char *s, int first, int last)
{
	if (first >= last)
		return (1);
	if (*(s + first) != *(s + last))
		return (0);
	return (is_palindrome_check(s, first + 1, last - 1));
}
