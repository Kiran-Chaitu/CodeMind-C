#include<stdio.h>
int main()
{
	int i,j,l=0,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j]&&a[i]!=0)
			{
				a[i]=0;
				a[j]=0;
			}
		}
		if(a[i]>l)
			l=a[i];
	}
	if(l==0)
		printf("-1");
	else
		printf("%d",l);
	return 0;
}