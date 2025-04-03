#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, a;
	int arr[31] = {0};
	
	for (i = 1; i <= 28; i++)
	{
		scanf("%d", &a);
		arr[a] = 1;
	}

	for (i = 1; i <= 30; i++)
	{
		if (arr[i] != 1)
		{
			printf("%d \n", i);
		}
	}
	return 0;
}