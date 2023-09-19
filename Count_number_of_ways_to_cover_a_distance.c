#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    if(n==1) printf("1");
    else if(n==2) printf("2");
    else if(n==3) printf("4");
    else {
        int a=1,b=2,c=4,d;
        for(i=4;i<=n;i++){
            d=a+b+c;
            a=b;
            b=c;
            c=d;
        }
        printf("%d",d);
    }
    
    
    
    return 0;
}