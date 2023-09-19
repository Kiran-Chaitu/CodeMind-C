#include<stdio.h>
int rs(int *a,int i,int n){
    if(n==i) return a[i];
    return a[i]+rs(a,i+1,n);
}
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k=rs(a,0,n-1);
   /* for(i=0;i<n;i++){
        sum+=a[i];
    }*/
    printf("%d",k);
    return 0;
}