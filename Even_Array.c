#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0||a[i]%2==0)
        {
            c++;
        }
    }
    if(c==n)
        printf("True");
    else 
        printf("False");
    return 0;
}