#include<stdio.h>
int main()
{
    int a,b,m;
    scanf("%d %d",&a,&b);
    m=(a>b)?a:b;
    while(1)
    {
        if(m%a==0&&m%b==0)
            break;
        m++;
    }
    int gcd=(a*b)/m;
    printf("%d",gcd);
}