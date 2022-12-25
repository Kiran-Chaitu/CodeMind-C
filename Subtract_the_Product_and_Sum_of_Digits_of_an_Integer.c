#include<stdio.h>
int main()
{
    int no,sum=0,pro=1,sub,tmp;
    scanf("%d",&no);
    while(no!=0)
    {
        tmp=no%10;
        sum=sum+tmp;
        pro=pro*tmp;
        no/=10;
    }
    sub=pro-sum;
    printf("%d",sub);
    return 0;
}