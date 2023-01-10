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

int main(void)
{
	int size = 10;
	char c = 'M';
	int i;
	char* arr = create_array(size, c);

	for (i = 0; i < size; i++)
	{
		printf("%c", arr[i]);
	}
	return (0);
}
