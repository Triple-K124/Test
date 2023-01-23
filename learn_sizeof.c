#include <stdio.h>

/**
* sizeof - Used to know the size of the data type
* char - Data type of char
* int - Data type of integer type
* float - Data type of float
**/

int main()
{
	char ch = ' ';
	int int_num = 0;
	float flt_num = 0.0f;
	double dbl_num = 0.0;	

	printf("The size of char is: %ld-bytes\n", sizeof(ch));
	printf("The size of int is: %ld-byte\n", sizeof(int_num));
	printf("The size of flat is: %ld-byte\n", sizeof(flt_num));
	printf("The size of dourble is: %ld-byte\n", sizeof(dbl_num));
	return 0;
}
