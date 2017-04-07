#include <stdio.h>

void main()
{
	double earn = 0, lost;
	double s = 0;

	while (1)
	{
		scanf("%lf", &earn);
		
		if (earn==0)
			break;

		if (earn <= 1000)
		{
			lost = 0;
		}
		else if (earn<=2000)
		{
			lost = earn - 1000;
			lost *= 0.05;
		}
		else if (earn <= 3000)
		{
			lost = earn - 2000;
			lost *= 0.1;
			lost += 50;
		}
		else if (earn <= 4000)
		{
			lost = earn - 3000;
			lost *= 0.15;
			lost += 150;
		}
		else if (earn<=5000)
		{
			lost = earn - 4000;
			lost *= 0.2;
			lost += 300;
		}
		else
		{
			lost = earn - 5000;
			lost *= 0.25;
			lost += 500;
		}

		printf("%.6lf", lost);
	}

}
