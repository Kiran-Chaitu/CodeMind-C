#include<stdio.h>
int main()
{
	int i,j,c1=0,n,k;
	scanf("%d",&n);
	int a[n],q;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	int b[k],c[k];
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
		scanf("%d",&q);
	for(i=0;i<n;i++)
	{
		if(a[i]<=q&&b[i]>=q)
			c1++;
	}
	printf("%d",c1);
	return 0;
}