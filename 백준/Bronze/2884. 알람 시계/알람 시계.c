#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, m;
	
	scanf("%d %d", &h, &m);

	int H, M;

	if(h>0)
	{
		if (m < 45)
		{
			H = h - 1;
			M = 60 + m - 45;

			printf("%d %d", H, M);
		}
		else if (m >= 45)
		{
			printf("%d %d", h, m - 45);
		}
	}

	else if (h == 0)
	{
		if (m < 45)
		{
			H = 24 - h - 1;
			M = 60 + m - 45;

			printf("%d %d", H, M);
		}
		else if (m >= 45)
		{
			printf("%d %d", h, m - 45);
		}
	}
}