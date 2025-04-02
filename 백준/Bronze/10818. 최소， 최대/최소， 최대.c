#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, n, i;
	int max = -1000000;
	int min = 1000000;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &n);

		if (n >= max)
		{
			max = n;
		}

		if (n <= min)
		{
			min = n;
		}
	}

	printf("%d %d", min, max);

	return 0;
}