#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j]&&a[i]!=0)
            {
                c++;
                a[i]=0;
                a[j]=0;
                break;
            }
        }
    }
    printf("%d",c);
    return 0;
}