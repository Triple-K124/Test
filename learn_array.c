#include <stdio.h>

/**
 * Learning how to initialize an array
 * It is good to use a loop to initialize an array
 */

int main ()
{
	int i;
	int list_int[10];

	for(i = 0; i < 10; i++)
	{
		list_int[i] = i + 1;
		printf("list_int[%d] is initialized with %p.\n", i, list_int);
	}

	return 0;
}
