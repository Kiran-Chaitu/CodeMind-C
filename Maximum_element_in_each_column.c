#include<stdio.h>
int main()
{
    int n,i,j,max=0,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
             scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<m;i++)
    {
        max=0;
        for(j=0;j<m;j++)
        {
             if(max<a[j][i])
                max=a[j][i];
        }
        printf("%d
",max);
    }
}