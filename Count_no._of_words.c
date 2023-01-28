#include<stdio.h>
#include<string.h>
int main()
{
    int i,w=1,l;
    char s[100];
    scanf("%[^
]s",s);
    l=strlen(s);
    for(i=0;i<=l;i++)
    {
        if(s[i]==' ')
            w++;
    }
    printf("%d",w);
}