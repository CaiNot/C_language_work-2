#include<stdio.h>

int main() {
	int i, n, s = 1;
	printf("Please enter n:");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		s = s * i;
	printf("%d!=%d", n, s);

	return 0;
}