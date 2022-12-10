#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	char l;

	char u;

	l = 'a';
	u = 'A';
	while (l <= 'z')
	{
		putchar(l);
		l++;

	}
	while (l <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
