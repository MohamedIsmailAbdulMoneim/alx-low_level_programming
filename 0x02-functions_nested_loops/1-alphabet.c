#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet
 */
void print_alphabet(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
}
