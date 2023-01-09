#include<stdio.h>
int main()
{
    int n,rm,c=0,i,co=0,d=0,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
    {
        t=n;
       while(t!=0)
       {
           d++;
           rm=t%10;
           if(rm==2||rm==3||rm==5||rm==7)
            co++;
           t/=10; 
       }
       if(co==d)
            printf("Mega Prime");
        else 
            printf("Not Mega Prime");
    }
    else 
        printf("Not Mega Prime");
    return 0;
}