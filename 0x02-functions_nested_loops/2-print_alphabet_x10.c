#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabet ten times
 */
void print_alphabet_x10(void)
{
	char l;
	int n = 0;

	while (n < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			putchar(l);
			l++;
		}
		putchar('\n');
		n++;
	}
}
