#include<stdio.h>
int main()
{
    int i,j,n,l,st,e;
    scanf("%d",&n);
    l=2*n-1;
    st=0;
    e=l-1;
    int a[l][l];
    while(n!=0)
    {
        for(i=st;i<=e;i++)
        {
            for(j=st;j<=e;j++)
            {
                if(i==st||i==e||j==st||j==e)
                {
                    a[i][j]=n;
                }
            }
        }
        st++;
        e--;
        n--;
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("
");
    }
}