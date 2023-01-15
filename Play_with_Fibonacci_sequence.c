#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}