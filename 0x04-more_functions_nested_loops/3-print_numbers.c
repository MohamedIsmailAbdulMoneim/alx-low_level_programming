#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
	let n;

	for (n = '0'; n < '10'; n++)
		putchar(n);
	putchar("\n");
}
