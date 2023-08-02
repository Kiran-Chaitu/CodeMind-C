#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int j,k;
    scanf("%d",&k);
    for(j=1;j<=k;j++)
    {
        char s[100];
        scanf("%s",s);
        int i,l=strlen(s),c=0;
        for(i=0;i<l;i++)
        {
            if(isdigit(s[i])){
                c++;
            }
        }
        if (c==l) printf("True
");
        else printf("False
");
    }
}