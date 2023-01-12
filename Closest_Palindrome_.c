#include<stdio.h>
int ispal(int);
int prepal(int);
int nextpal(int);
int main()
{
    int n,k,pp,np;
    scanf("%d",&n);
    pp=prepal(n);
    np=nextpal(n);
    if(n-pp<np-n)
        printf("%d",pp);
    else if(n-pp>np-n)
        printf("%d",np);
    else 
        printf("%d %d",pp,np);
    return 0;
}
int ispal(int n)
{
    int rev=0,rm,t;
    t=n;
    while(t!=0)
    {
        rm=t%10;
        rev=rev*10+rm;
        t/=10;
    }
    if(rev==n)
        return 1;
    else 
        return 0;
}
int prepal(int n)
{
    while(1)
    {
        if(ispal(n-1)==1)
            break;
        else 
            n--;
    }
    return n-1;
}
int nextpal(int n)
{
    while(1)
    {
        if(ispal(n+1)==1)
            break;
        else 
            n++;
    }
    return n+1;
}