#include<stdio.h>
#include<string.h>
int main()
{
    int i,d=0,l,cn=0,v=0,ws=0;
    char s[100];
    scanf("%[^
]s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
            d++;
        else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            v++;
        else if(s[i]==' ')
            ws++;
        else 
            cn++;
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",v,cn,d,ws);
    return 0;
}