#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,rm,sub,d,i,k,j;
    scanf("%d %d",&n,&r);
        k=pow(10,r);
        rm=n%k;
        n=n/k;
        d=log10(n)+1;
        j=d-r;
        for(i=1;i<=j;i++)
        {
        	n=n/10;
		}
		sub=abs(n-rm);
    printf("%d",sub);
}