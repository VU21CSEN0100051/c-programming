#include <stdio.h>
main() 
{
    int n,i=1,x;
    scanf("%d", &n);
    while (i<=12) 
	{
       x =n*i;
       printf("%d*%d=%d\n",n,i,x);
        i++;
    }
}
