#include <stdio.h>
#include <stdlib.h>

char* create_array(unsigned int size, char c)
{
	unsigned int i;
	char* arr = (char*) malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		if(arr == NULL)
		{
			printf("failed to allocate memory");
			return;
		}
		arr[i] = c;
	}
	return arr;
}
