#include<stdio.h>
int main()
{
    int n,k,x,y,sum;
    scanf("%d %d %d %d",&n,&k,&x,&y);
    int a,b,c,d;
    a=k*x;
    b=n-k;
    c=b*x;
    d=b*y;
    if(c>d)
    {
        sum=a+d;
        printf("%d",sum);
    }
    else
    {
        sum=a+c;
        printf("%d",sum);
    }
    return 0;
}