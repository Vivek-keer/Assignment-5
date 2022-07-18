#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x;
    printf("Enter number n:  ");
    scanf("%d",&n);
    for(x=1;x<=10;x++)
    {
    printf("%d\n",n*x);
    }
    return 0;
}
