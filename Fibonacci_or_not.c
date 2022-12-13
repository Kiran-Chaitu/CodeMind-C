#include<stdio.h>
int main()
{
	int a,b,c,i,n,cnt=0;
	a=0,b=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		c=a+b;
		a=b;
		b=c;
		if(c==n)
		{
			cnt++;
			break;
		}
	}
	if(cnt==1)
		printf("True");
	else 
		printf("False");
	return 0;
}