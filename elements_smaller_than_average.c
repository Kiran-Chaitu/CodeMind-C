#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,avg,sum=0,c=0;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
      if(a[i]<=avg)  
      {
          c++;
      }
    }
    printf("%d",c);
}