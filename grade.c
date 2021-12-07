#include<stdio.h>
main()
{
	int a,b,c,d,e,T;
	float p;
	printf("enter marks of first subject-");
	scanf("%d",&a);
	printf("enter marks of second subject-");
	scanf("%d",&b);
	printf("enter marks of third subject-");
	scanf("%d",&c);
	printf("enter marks of fourth subject-");
	scanf("%d",&d);
	printf("enter marks of fifth subject-");
	scanf("%d",&e);
	T=(a+b+c+d+e);
	p=(T*100/500);
	printf("%d",T);
	printf("\n%f",p);
	if(p>90.0)
	{
		printf("Grade A");
	}
	else if(p>80.0)
	{
		printf("Grade B");
	}
	else if(p>70.0)
	{
		printf("Grade C");
	}
	else if(p>40.0)
	{
		printf("Grade D");
	}
	else
	{
		printf("Grade E");
	}
}
