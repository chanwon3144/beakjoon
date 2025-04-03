#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int  n, m, i, j;
	int a[100]={0};
	int x, y;
	int temp = 0;
	scanf("%d %d", &n, &m);

	for (j = 1; j <= n; j++)
	{
		a[j] = j;
	}

	for (i = 0; i < m; i++)
	{
		scanf("%d %d", &x, &y);
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
	}

	for (i = 1; i <= n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}