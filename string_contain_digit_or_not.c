#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0,l;
    char s[100];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
            c++;
    }
    if(c>0)
        printf("Contains %d digit",c);
    else 
        printf("Doesn't contain digit");
    return 0;
}