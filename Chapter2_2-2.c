#include <stdio.h>

int f(int n)
{
if (n == 1)
return 1;
else
return n*f(n - 1);
}
void main()
{
	int s = 0;
	scanf("%d", &s);

	for (int i = 1;;++i)
	{
		if (f(i) >= s)
		{
			printf("%d\n", i);
			break;
		}
	}
}