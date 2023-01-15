#include<stdio.h>
int isp(int);
int nxp(int);
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a+b;
	int d=nxp(c)-c;
	printf("%d",d);
	return 0;
}
int isp(int c)
{
	int i,t=0;
	for(i=1;i<=c;i++)
	{
		if(c%i==0)
			t++;
	}
	if(t==2)
		return 1;
	else 
		return 0;
}
int nxp(int c)
{
	while(1){
	if(isp(c+1)==1){
		return c+1;
		break;
	}
	else 
		c++;
	}
}