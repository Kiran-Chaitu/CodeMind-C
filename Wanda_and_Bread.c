#include<stdio.h>
int main()
{
    int m,n,k;
    scanf("%d %d %d",&m,&n,&k);
    if(m<=(n*k))
        printf("YES");
    else 
        printf("NO");
    return 0;
}