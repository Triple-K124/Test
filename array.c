#include <stdio.h>

int main()
{
	int i;
	char array_ch[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};

	for (i = 0; i < 7; i++)
	{
		printf("array_ch[%d] contains: %c\n", i, array_ch[i]);
		printf("Put all the elements together\n");

		for (i = 0; array_ch[i] != '\0'; i++)
		{
			printf("%c", array_ch[i]);
		}
	}

	return 0;
}
