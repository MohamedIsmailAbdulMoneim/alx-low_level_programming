#include <stdio.h>
/**
 * main - Entry
 * print_alphabet - prints the alphabet
 * Return: 0
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
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
