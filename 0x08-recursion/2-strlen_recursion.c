#include "main.h"

int _strlen_recursion(char *s)
{
	int len = 0;
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return 1 + _strlen_recursion(s + 1);
	}
	return len;
}
