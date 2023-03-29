#include<stdio.h>
int main()
{
	int i,j,k=0,c=0,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(a[i]==1)
			c++;
		else{
			if(k<c)
				k=c;
			c=0;
		}
	}
	printf("%d",k);
}