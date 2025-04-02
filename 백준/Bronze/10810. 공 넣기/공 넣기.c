#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int  n, m, i, j;
	int a[100]={0};
	int x, y, z;
	scanf("%d %d", &n, &m);

	for (i = 0; i < m; i++)
	{
		scanf("%d %d %d", &x, &y, &z);

		for (j = x; j <= y; j++)
		{
			a[j - 1] = z;
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}