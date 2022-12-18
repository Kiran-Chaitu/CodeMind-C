#include<stdio.h>
#include<math.h>
int main()
{
	int no,c=0,rm,p=1,sum=0,t;
	scanf("%d",&no);
	t=no;
	while(no!=0){
		c++;
		no/=10;
	}
	no=t;
	while(no!=0){
		rm=no%10;
		sum+=pow(rm,c);
		c--;
		no/=10;
	}
	if(sum==t)
		printf("True");
	else 
		printf("False");
	return 0;
}