#include <stdio.h>


double f(double x)
{
	double s = 0.0;
	s = (3 * x*x*x - 4 * x*x - 5 * x + 13) / (9 * x*x - 8 * x - 5);
	return s;
}
void main()
{
	double a = 5.0, b;
	printf("Please input a number:\n");
	scanf("%lf", &a);
	while (1)
	{
		b = a - f(a);
		if (b-a <= 1e-6&&b-a>=-1e-6)
		{
			printf("%lf\n", b);
			break;
		}
		else
			a = b;
	}
}