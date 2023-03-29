#include<stdio.h>
int main()
{
	int i,j,c=0,d=0,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=0;
		while(a[i]!=0)
		{
			a[i]/=10;
			c++;
		}
		if(c%2==0)
			d++;
	}
	printf("%d",d);
	return 0;
}