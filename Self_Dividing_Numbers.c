#include<stdio.h>
int main()
{
    int n,k=0,t,i,a,b,c=0,rm;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        t=i;
        c=0;
        k=0;
        while(t!=0)
        {
            k++;
            rm=t%10;
            if(rm!=0&&i%rm==0)
                c++;
            t=t/10;
        }
        if(c==k)
            printf("%d ",i);
    }
    return 0;
}