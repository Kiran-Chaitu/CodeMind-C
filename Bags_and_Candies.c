#include<stdio.h>
int main()
{
    int n,k,m,a;
    scanf("%d %d %d",&n,&k,&m);
    a=n/(k*m);
    if(n%(k*m)==0)
        printf("%d",a);
    else    
        printf("%d",a+1);
    return 0;
        
}