#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3;
    scanf("%d %d
%d %d %d
%d %d %d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    int a,b,x,y,z;
    a=a1+a2+a3;
    b=b1+b2+b3;
    if(a>=150&&b>=150)
    {
        x=a+b+c;
        y=a+b+d+d;
        if(x<y)
            printf("YES");
        else
            printf("NO");
    }
    else if((a>=150&&b<150)||(a<150&&b>=150))
    {
        x=a+b+c+d;
        y=a+b+d+d;
        if(x<y)
            printf("YES");
        else
            printf("NO");
    }
    else
        printf("NO");
}