#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int N, i;
	char a[5] = "long";
	scanf("%d", &N);

	if (N % 4 == 0)
	{
		for (i = 0; i < (N / 4); i++)
		{
			printf("%s ", a);
		}
	}
	printf("int");

}