#include<stdio.h>
int main()
{
    int n,i,sum=0,x;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        x=n%i;
        if(x==0)
        {
         sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("is a perfect number");
    }
    else
    {
        printf("is not a perfect number");
    }
}
