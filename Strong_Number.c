#include<stdio.h>
int main()
{
    int k,j;
    scanf("%d",&k);
    for(j=1;j<=k;j++)
    {
    int n,i,s=0,f=1,t,rm;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        rm=n%10;
        f=1;
        for(i=1;i<=rm;i++)
        {
            f*=i;
        }
        s+=f;
        n/=10;
    }
    if (s==t) printf("Strong
");
    else printf("Not Strong
");}
}