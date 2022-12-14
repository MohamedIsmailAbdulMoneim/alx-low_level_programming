#include "main.h"
/**
 * _islower - check if a char is lowercase
 * c: is the char to be checked
 * Return: 1 if it's lower case and 0 if it's not lower case
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

