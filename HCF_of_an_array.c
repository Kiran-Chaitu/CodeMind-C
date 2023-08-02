#include<stdio.h>
int main(){
	int n,i,j,h=1,m,l=0,c=0,hcf;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(l<a[i])
			l=a[i];
	}
	while(1){
		if(h<=l){
			for(i=0;i<n;i++){
				if(a[i]%h==0){
					c++;
				}
			}
			if(c==n){
				c=0;
				hcf=h;
				h++;
			}
			else{
				c=0;
				h++;
			}
		}
		else break;
	}
	printf("%d",hcf);
}
