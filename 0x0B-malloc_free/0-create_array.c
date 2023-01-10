#include <stdio.h>
#include <stdlib.h>

char* create_array(int size, char c)
{
	int i;
	char* arr = (char*) malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return arr;
}
