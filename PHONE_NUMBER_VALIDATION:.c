#include<stdio.h>
#include<string.h>
int main()
{
    char a[11];
    scanf("%s",a);
    if(a[0]!=0&&strlen(a)==10)
    printf("Valid");
    else
    printf("Invalid");
}