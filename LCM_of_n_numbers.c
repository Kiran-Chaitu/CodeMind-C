#include<stdio.h>
int main()
{
	int n,i,l=0,c=0,m;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(l<a[i])
			l=a[i];
	}
	m=l;
	while(1)
	{
		c=0;
		for(i=0;i<n;i++)
		{
			if(m%a[i]==0)
				c++;
		}
		if(c==n)
			break;
		else 
			m=m+l;
	}
	printf("%d",m);
	return 0;
}