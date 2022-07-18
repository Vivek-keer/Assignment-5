#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x;
    printf("Enter number n:  ");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
    printf("%d\n",x*x*x);
    }
    return 0;
}
