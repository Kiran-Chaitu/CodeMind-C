#include<stdio.h>
int main()
{
    int n,i,no,t,rm,rev=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&no);
        t=no;
        rev=0;
        while(no!=0)
        {
            rm=no%10;
            rev=rev*10+rm;
            no/=10;
        }
        if(rev==t)
            printf("True
");
        else 
            printf("False
");
    }
}