#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,i,j,c=0;
	scanf("%d",&n);
	d=log10(n)+1;
	int a[d],b[d];
	for(i=0;i<d;i++)
	{
		a[i]=n%10;
		b[i]=a[i];
		n=n/10;
	}
	for(i=0;i<d;i++)
	{
		for(j=0;j<d;j++)
		{
			if(a[i]==b[j])
				c++;
		}
	}
	if(c==d)
		printf("Unique Number");
	else 
		printf("Not Unique Number");
}