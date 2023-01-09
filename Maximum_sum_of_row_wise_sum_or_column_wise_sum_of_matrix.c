#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m],i,j,k=-1000,l=-1000,x,y;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        x=0;
        for(j=0;j<m;j++)
        {
            x+=a[i][j];
        }
        if(k<x)
            k=x;
    }
    for(i=0;i<m;i++)
    {
        y=0;
        for(j=0;j<n;j++)
        {
            y+=a[j][i];
        }
        if(l<y)
            l=y;
    }
    if(k>l)
        printf("%d",k);
    else 
        printf("%d",l);
    return 0;
}