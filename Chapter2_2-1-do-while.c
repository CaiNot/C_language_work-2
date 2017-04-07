#include <stdio.h>

int main() {
	int i = 1, n = 1, s = 1;
	printf("Please enter n:");
	scanf("%d", &n);
	do {
		s *= i;
		++i;
	} while(i <= n);
	printf("%d!=%d\n", n, s);
	return 0;
}
