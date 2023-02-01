#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	scanf("%d",&n);
	int a[n],d[n],k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		c=0;
		a[i]=a[i]+k;
		for(j=0;j<n;j++)
		{
			if(a[i]>=a[j])
				c++;
		}
		d[i]=c;
		if(d[i]==n)
			printf("True ");
		else 
			printf("False ");
		a[i]=a[i]-k;
	}
	return 0;
}