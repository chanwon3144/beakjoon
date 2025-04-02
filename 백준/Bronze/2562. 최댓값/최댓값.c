#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, max;
	int a[9];

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}

	max = a[0];

	for (i = 1; i < 9; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	for (i = 0; i < 9; i++)
	{
		if (max == a[i])
		{
			printf("%d\n%d", a[i], i+1);
			break;
		}
	}

	return 0;
}