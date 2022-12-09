#include<stdio.h>
int main()
{
    int a,b,c,j,k,l;
    scanf("%d %d %d",&a,&b,&c);
    j=a+b,k=b+c,l=a+c;
    if(j>k&&j>l)
        printf("%d",j);
    else if(k>l)
        printf("%d",k);
    else
        printf("%d",l);
    return 0;
}