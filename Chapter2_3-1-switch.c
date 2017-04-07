#include <stdio.h>

void main()
{
	double money = 0.0, tax = 0.0;


	scanf("%lf", &money);
	int x = (int)money / 1000;

	switch (x)
	{
	case 0:
		tax = 0;
		break;
	case 1:
		tax = (money - 1000)*0.05;
		break;
	case 2:
		tax = (money - 2000)*0.1;
		tax += 50;
		break;
	case 3:
		tax = (money - 3000)*0.15;
		tax += 150;
		break;
	case 4:
		tax = (money - 4000)*0.2;
		tax += 300;
		break;
	default:
		tax = (money - 5000)*0.25;
		tax += 550;
		break;
	}

	printf("tax=%lf", tax);
}