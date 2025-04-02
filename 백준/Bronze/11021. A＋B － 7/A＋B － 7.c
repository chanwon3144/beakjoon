#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void)
{
	int T, i, a, b;
	scanf("%d", &T);

	for (i = 1; i <= T; i++)
	{
		scanf("%d %d", &a, &b);

		if (a > 0 && b < 10)
		{
			printf("Case #%d: %d\n", i, a + b);
		}
	}
	return 0;
}