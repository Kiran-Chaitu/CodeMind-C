#include<stdio.h>
#include<math.h>
int pr(int n){
    if(n<=1) return 0;
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int pal(int n){
    int rev=0,rm,t=n;
    while(t){
        rm=t%10;
        rev=rev*10+rm;
        t/=10;
    }
    if(rev==n) return 1;
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    n++;
    while(1){
        if(pr(n)==1 && pal(n)==1) break;
        n++;
    }
    printf("%d",n);
    return 0;
}