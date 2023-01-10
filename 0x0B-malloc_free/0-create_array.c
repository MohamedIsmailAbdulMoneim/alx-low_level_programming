#include <stdio.h>
#include <stdlib.h>

char* create_array(unsigned int size, char c)
{
	unsigned int i;
	if (size == 0)
		return (NULL);
	char* arr = (char*) malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		if(arr == NULL)
			return (NULL);
		arr[i] = c;
	}
	return arr;
}
