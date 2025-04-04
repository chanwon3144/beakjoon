#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char main()
{

	char arr[1000];
	int i;
	int count = 0;

	scanf(" %s", arr);
	
	scanf("%d", &i);

	printf("%c", arr[i - 1]);
	return 0;
}