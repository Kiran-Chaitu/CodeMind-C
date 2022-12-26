#include<stdio.h>
int main()
{
    int a,b,c,rm,s=0,d,q,p;
    scanf("%d",&a);
    b=(a*a);
    while(a!=0)
    {
        rm=a%10;
        s=s*10+rm;
        a=a/10;
    }
    d=s*s;
    p=0;
    while(d!=0)
    {
        q=d%10;
        p=p*10+q;
        d=d/10;
    }
    if(p==b)
        printf("True");
    else 
        printf("False");
    return 0;
}