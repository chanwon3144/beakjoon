#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i;
	
	scanf("%d", &N);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", N, i, N*i);
	}
}

