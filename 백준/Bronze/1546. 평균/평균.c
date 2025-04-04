#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, N;
	int arr[1000];
	int max = 0;

	float sum = 0;

	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		scanf("%d", &arr[i]);

		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	for (i = 1; i <= N; i++)
	{
		sum += (float)arr[i] / max; // 파라미터 설정 꼭
	}

	sum = (sum*100) / N;

	printf("%f", sum);

}