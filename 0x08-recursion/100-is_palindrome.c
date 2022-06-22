#include "main.h"

int _strlen_recursion(char *s);
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
	int len = 0;

	len = _strlen_recursion(s);
	return (is_palindrome_check(s, 0, len - 1));
}

/**
 * _strlen_recursion - finds the length of a string
 * @s: the string
 *
 * Return: returns the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
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
