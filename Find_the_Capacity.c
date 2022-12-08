#include<stdio.h>
int main()
{
    int a[4];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    a[3]=a[0]*a[1]*a[2];
    printf("%dKB",a[3]);
    return 0;
}