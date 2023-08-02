#include<stdio.h>
int main()
{
	int n,i,c=0,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int l=a[0];
	for(i=0;i<n;i++)
	{
		if(l>a[i])
			l=a[i];
	}
	for(i=l;i>=2;i--)
	{
	    c=0;
	   for(j=0;j<n;j++)
	   {
	       if(a[j]%i==0) c++;
	   }
	   if (c==n) break;
	   else c=-1;
	}
	if (c==-1) printf("1");
	else printf("%d",i);
	return 0;
	
}
