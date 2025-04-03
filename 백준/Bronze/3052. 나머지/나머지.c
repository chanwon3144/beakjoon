#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, a;
	int arr[42] = {0};
	int count = 0;

	for (i = 1; i <= 10; i++)
	{
		scanf("%d", &a);
		arr[a % 42] = 1;
	}

	for (i = 0; i < 42; i++)
	{
		count += arr[i];
	}

	printf("%d", count);

}