#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    if(n%4==0)
    {
        d=n/4;
        printf("%d",d);
    }
    else
    {
        d=(n/4)+1;
        printf("%d",d);
    }
    return 0;
}