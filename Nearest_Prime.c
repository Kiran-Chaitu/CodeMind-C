#include<stdio.h>
int prime(int);
int pre_prime(int);
int next_prime(int);
int main()
{
    int x,a,b,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    	scanf("%d",&x);
 	   	a=x-pre_prime(x);
    	b=next_prime(x)-x;
    	if(a<b)
    		printf("%d
",pre_prime(x));
		else if(a==b)
			printf("%d
",pre_prime(x));
		else
			printf("%d
",next_prime(x));
	}
    return 0;
}
int prime(int x)
{
    int i,c=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
            c++;
    }
    if(c==2)
        return 1;
        
    else 
        return 0;
}
int pre_prime(int x)
{
	while(prime(x)==0){
		x--;
	}
	return x;
}
int next_prime(int x)
{
	while(prime(x)==0)
	{
		x++;
	}
	return x;
}