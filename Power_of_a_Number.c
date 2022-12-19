#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,a;
    scanf("%d %d %d",&x,&y,&m);
    a=pow(x,y);
    int b=a%m;
    printf("%d",b);
    return 0;
}