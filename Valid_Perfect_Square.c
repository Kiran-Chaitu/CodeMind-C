#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,tc,i;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
    scanf("%d",&n);
    a=sqrt(n);
    b=a*a;
    if(b==n)
    printf("True
");
    else
    printf("False
");
    }
}