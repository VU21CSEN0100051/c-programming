#include<stdio.h>
main()
{
	int D;
	printf("Enter number of days in February this year:");
	scanf("%d",&D);
	if(D=29)
	{
	printf("The given year is leap year.");
    } 
	else
	{
	printf("The given year is not a leap year");
    }
}
