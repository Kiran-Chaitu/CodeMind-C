#include<stdio.h>
int main()
{
    int n,sum=0,rm;
    scanf("%d",&n);
    while(1)
    {
        rm=n%10;
        sum+=rm;
        n/=10;
        if(sum<10&&n==0)
        {
            break;
        }
        else if(sum>=10&&n==0)
        {
            n=sum;
            sum=0;
        }
    }
    printf("%d",sum);
}

