#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i;
	int sum = 0;

	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		sum += i;
	
	}
	printf("%d", sum);
}

