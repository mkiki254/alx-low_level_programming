#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string to be printed
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	/**
	 * You are adding one to the address because
	 * character has one byte
	 */
	_puts_recursion(s + 1);
}
