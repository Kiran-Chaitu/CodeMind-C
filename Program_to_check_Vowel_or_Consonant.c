#include<stdio.h>
int main()
{
    char ap[11]={'a','e','i','o','u','A','E','I','O','U'};
    char a,i,c=0;
    scanf("%c",&a);
    for(i=0;i<=11;i++)
    {
        if(ap[i]==a)
            c++;
    }
    if(c>0)
        printf("Vowel");
    else 
        printf("Consonant");
    return 0;
}