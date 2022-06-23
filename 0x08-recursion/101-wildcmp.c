#include "main.h"

/**
 * wildcmp - finds out whether two strings are identical
 * @s1: first string
 * @s2: second string
 *
 * Return: returns 1 to show they are identical,
 * 2 to show they are not identical
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '*' && *(s1 + 1) != '\0' && *s2 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '*' || *s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
