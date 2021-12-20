#include <stdio.h>
main() 
{
    int n, i,x;
    scanf("%d", &n);
    i = 1;
	while (i<=n) 
	{
        x=x*i;
        i++;
    }
    printf("%d", x);
}
