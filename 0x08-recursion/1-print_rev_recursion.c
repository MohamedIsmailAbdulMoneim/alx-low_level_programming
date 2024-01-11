#include "main.h"

/**
 * _puts_recursion - prints a string in reverse, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		if (*s == '\n') continue;
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
