#include <stdio.h>

void main()
{
	char num[30];
	int i = 0;

	scanf("%s", num);

	for (i = 0;; ++i)
	{
		if (num[i] == '\0')
			break;
	}

	for (--i; i > -1; --i)
	{
		printf("%c", num[i]);
	}
	printf("\n");
}