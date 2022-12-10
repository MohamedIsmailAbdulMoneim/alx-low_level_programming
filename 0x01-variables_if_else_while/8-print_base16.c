#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char l;

	int n;

	l = 'a';
	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
