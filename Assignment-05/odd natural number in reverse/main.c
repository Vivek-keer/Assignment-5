#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number n:  ");
    scanf("%d",&n);
    for(n;n>0;n--)
    {
    printf("%d\n",2*n-1);
    }
    return 0;
}
