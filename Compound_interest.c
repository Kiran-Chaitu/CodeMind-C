#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r,n,a,cp;
    scanf("%lf
%lf
%lf",&p,&r,&t);
    a=p*(pow(((100+r)/100),t));
    printf("%.2lf",a);
    return 0;
}