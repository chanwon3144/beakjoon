#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define arr_num(arr) (sizeof(arr)/sizeof(arr[0]))

int main()
{
	int i;
	char arr[100];
	int count = 0;
	scanf(" %s", arr);

	for (i = 0; i < 100; i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'z')
		{
			count++;
		}
		else
		{
			break;
		}
	}

	printf("%d", count);

}