#include <stdio.h>

int main()
{
	int i = 1, n = 1, s = 1;

	printf("Please enter n:");
	scanf("%d", &n);

	while (i<=n)
	{
		s *= i;
		++i;
	}

	printf("%d!=%d\n",n, s);

	return 0;
}