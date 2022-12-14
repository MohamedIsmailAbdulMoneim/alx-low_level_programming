#include <unistd.h>
#include "main.h"
/**
 * main - print _putchar
 * is written by mia
 *  _putchar - writes the character c to stdout
 * Return: 0
 */
int main(void)
{
int _putchar(char c)
{
	return (write(1, &c, 1));
}
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);
}
