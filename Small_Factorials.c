#include<stdio.h>
int main()
{
    int n,i,j,p=1,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=1;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            p=p*j;
        }
        printf("%d
",p);
    }
}