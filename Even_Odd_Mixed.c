#include<stdio.h>
int main()
{
    int n,es=0,os=0,rm,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        c++;
        rm=n%10;
        if(n%2==0) es++;
        else if(n%2!=0) os++;
        n/=10;
    }
    if(c==es)
        printf("Even");
    else if(c==os) 
        printf("Odd");
    else 
        printf("Mixed");
    return 0;
}