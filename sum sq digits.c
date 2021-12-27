#include<stdio.h>
int main()
{
    int n,sum=0,x;
    scanf("%d", &n);
    while(n>0)
    {
        x=n%10;
        sum=sum+(x*x);
        n=n/10;
    }
    printf("sum=%d",sum);
}
