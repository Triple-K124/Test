#include <stdio.h>

/**
 * if - This statement happens when a codition is met
 **/


int main ()
{
	int num;
	
	for (num = 0; num <100; num++)
	{
		if((num % 2 == 0) && (num % 3 == 0))
			printf("These number is divisible by 2 and 3: %d\n", num);

	}
	return 0;
}
