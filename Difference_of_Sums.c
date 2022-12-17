#include<stdio.h>
int main()
{
    int n,sum=0,i,p,sn=0,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=i*i;
        sum+=p;
        sn+=i;
    }
    d=(sn*sn)-sum;
    printf("%d",d);
    return 0;
}