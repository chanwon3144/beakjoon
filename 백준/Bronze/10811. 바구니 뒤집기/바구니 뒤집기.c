#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int N, M, i, j, a, b;
	int arr[100] = { 0, };
	int temp = 0;

	scanf("%d %d", &N, &M);

	for (i = 1; i <= N; i++)
	{
		arr[i] = i;
	}

	for (i = 0; i < M; i++)
	{
		scanf("%d %d", &a, &b);

		for (j = 0; j <= (b - a) / 2; j++)
		{
			temp = arr[a + j];
			arr[a + j] = arr[b - j];
			arr[b - j] = temp;
		}
	}
	
	for (i = 1; i <= N; i++)
	{
		printf("%d ", arr[i]);
	}
}