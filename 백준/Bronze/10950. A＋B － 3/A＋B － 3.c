#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i;
	int a, b;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
	}
}

