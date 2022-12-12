#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    if(a%5==0)
    {
       b=a/10;
       c=(a%10)/5;
       d=b+c;
       printf("%d",d);
    }
    else 
    {
        printf("-1");
    }
    return 0;
}