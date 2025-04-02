#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{
	int N, i, V;
	int a[100];
	int count = 0;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d ", &a[i]);
	}

	scanf("%d", &V);

	for (i = 0; i < N; i++)
	{
		if (a[i] == V)
		{
			count++;
		}
	}

	printf("%d", count);

}