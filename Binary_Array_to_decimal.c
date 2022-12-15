#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0,j=0,rm;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=(n-1);i>=0;i--)
    {
        rm=a[i]*pow(2,j);
        sum+=rm;
        j++;
    }
    printf("%d",sum);
}