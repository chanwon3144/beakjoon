#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, X;
	int n, x;
	int i;
	scanf("%d %d", &X, &N);


	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &x, &n);

		X -= x * n;
	}

	if (X == 0)
	{
		printf("Yes");
	}

	else
	{
		printf("No");
	}
}

