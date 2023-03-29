#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int l=strlen(a);
    char b[1];
    scanf("%s",b);
    int c=1,i;
    for(i=0;i<l;i++){
        if(a[i]==b[0]) c++;
    }
    if(c>1)
        printf("%d",c);
    else if(c==1)
        printf("-1");
}