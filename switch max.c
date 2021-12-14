#include<stdio.h>
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 0:printf("b is greater");break;
		case 1:printf("a is greater");break;
		default:printf("error");
	}
}
