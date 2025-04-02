#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{
	int T, i, a, b, j, l;
	scanf("%d", &T);

	for (i = 1; i <= T; i++)
	{
		for (j = T; j > i; j--)
		{
			printf(" ");
		}

		for (l = 0; l < i; l++)
		{
			printf("*");
		}

	printf("\n");

	}
	return 0;
}