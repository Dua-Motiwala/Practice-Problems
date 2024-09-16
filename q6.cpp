#include <stdio.h>

int main()
{
	float Marks;
	printf("Enter the student's marks: ");
	scanf("%f", &Marks);
	
	if(Marks >= 90)
	{
		printf("Grade A\n");
	}
	else if(Marks >= 80 && Marks < 90)
	{
		printf("Grade B\n");
	}
	else if(Marks >= 70 && Marks < 80)
	{
		printf("Grade C\n");
	}
	else if(Marks >= 60 && Marks < 70)
	{
		printf("Grade D\n");
	}
	else
	{
		printf("Grade F\n");
	}
	return 0;
}