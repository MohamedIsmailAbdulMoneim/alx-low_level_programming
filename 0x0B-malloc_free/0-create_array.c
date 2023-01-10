#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - returns a pointer to address of memory
 * @size: size of requested bytes
 * @c : char to intialize
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
