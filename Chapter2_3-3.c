#include <stdio.h>

int num(int i, int j)
{
	if (j == 0)
		return  1;
	return num(i, j - 1)*(i - j + 1) / j;
}
void main()
{
	int space = 0;
	int n = 0;
	for (;;)
	{
		scanf("%d", &n);
		if (n == 0)
			break;
		for (int i = 0; i < n; ++i){
			space = 2 * (n - i - 1);
			while (space)
			{
				printf(" ");
				--space;
			}
			for (int j = 0; j <= i; ++j)
			{
				if (j == 0)
					printf("%d", num(i, j));
				else printf("%4d", num(i, j));
			}
			printf("\n");
		}
	}

}