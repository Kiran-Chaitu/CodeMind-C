#include<stdio.h>
int main()
{
    int w,a,b,c;
    scanf("%d %d %d %d",&w,&a,&b,&c);
    if(a==w||b==w||c==w)
        printf("YES");
    else if((a+b==w)||(a+c==w)||(b+c==w))
        printf("YES");
    else 
        printf("NO");
    return 0;
}