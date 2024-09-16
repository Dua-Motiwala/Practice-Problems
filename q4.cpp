#include <stdio.h>

int main()
{
	float Income, Tax, NetIncome;
	printf("Enter your income:");
	scanf("%f", &Income);
	
	if(Income <= 250000)
	{
		Tax = 0;
		printf("Tax = 0%%\n");
	}
	else if(Income >= 250001 && Income <= 500000)
	{
		Tax = 0.5;
		printf("Tax = 5%%\n");
	}
	else if(Income >= 500001 && Income <= 1000000)
	{
		Tax = 0.20;
		printf("Tax = 20%%\n");
	}
	else
	{
		Tax = 0.30;
		printf("Tax = 30%%\n");
	}
	
	NetIncome = Income + Income*Tax;
	printf("Net Income is %f\n", NetIncome);
}