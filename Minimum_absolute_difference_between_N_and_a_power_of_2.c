#include<stdio.h>
#include<math.h>
int main()
{
	int n,l,r;
	scanf("%d",&n);
	l=pow(2,floor(log2(n)));
	r=l*2;
	if(n-l<r-n)
		printf("%d",n-l);
	else 
		printf("%d",r-n);
	return 0;
}