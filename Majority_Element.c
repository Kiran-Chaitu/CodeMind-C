#include<stdio.h>
int main()
{
	int i,j,c=0,n;
	scanf("%d",&n);
	int a[n],k=n/2;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j]&&a[i]!=0)
			{
				c++;
				a[j]=0;
			}
		}
			if(c>k)
			printf("%d",a[i]);
	}
	return 0;
}