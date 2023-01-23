#include <stdio.h>

/**
 * num - is a variable
 * check out the and operator and its result
 */

int main ()
{
	int num;

	num = 0;
	printf("The AND operator yields: %d\n", (num % 2 == 0) && (num % 3 == 0));

	num = 2;
	printf("The AND operator yields: %d\n", (num % 2 == 0) && (num % 3 == 0));

	num = 3;
	printf("The AND opearator yields: %d\n", (num % 2 == 0) && (num % 3 == 0));

	num = 6;
	printf("The AND operator yields: %d\n", (num % 2 == 0) && (num % 3 == 0));

	return 0;
}
