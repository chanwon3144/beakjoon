#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, i, x;
	int a[100000];

	scanf("%d %d", &N, &x);

	for (i = 0; i < N; i++)
	{
		scanf("%d ", &a[i]);

		if (a[i] < x)
		{
			printf("%d ", a[i]);
		}
	}
}