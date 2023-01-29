#include<stdio.h>
int main()
{
    int n,max=-100,min=1000;
    scanf("%d",&n);
    int a[n],i,j,c,d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                if(i!=j) a[j]=0;
            }
        }
        if(a[i]==c)
        {
                d++;
                if(max<a[i])
                    max=a[i];
                if(min>a[i])
                    min=a[i];
        }
    }
    if(d==0) printf("-1");
    else 
        printf("%d %d",min,max);
}