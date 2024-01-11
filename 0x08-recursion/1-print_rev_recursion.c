#include "main.h"

/**
 * _puts_recursion - prints a string in reverse, followed by a new line
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		if(*s != '\n') _putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
