#include<stdio.h>
int main()
{
    int no;
    scanf("%d",&no);
    if(no%3==0)
        printf("Pling");
    if(no%5==0)
        printf("Plang");
    if(no%7==0)
        printf("Plong");
    if(no%3!=0&&no%5!=0&&no%7!=0) 
        printf("%d",no);
    return 0;
}