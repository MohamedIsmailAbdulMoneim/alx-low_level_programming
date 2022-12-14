#include "main.h"
/**
 * _islower - check if a char is lowercase
 * Return: 1 if it's lower case and 0 if it's not lower case
 * Parameter: is int 
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

