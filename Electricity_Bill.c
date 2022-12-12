#include<stdio.h>
int main()
{
    float u,b,sc,tb,cp;
    scanf("%f",&u);
    if(u<200){
        cp=1.20;
        b=1.20*u;}
    else if(u>=200&&u<400){
        cp=1.40;
        b=1.40*u;}
    else if(u>=400&&u<600){
        cp=1.60;
        b=1.60*u;}
    else if(u>=600&&u<800){
        cp=1.80;
        b=1.80*u;}
    else{
        cp=2.00;
        b=2.00*u;}
    if(b>400)
    {
        sc=b*15/100;
        tb=sc+b;
        printf("Units Consumed: %.f
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,cp,b,sc,tb);
    }
    else
    {
        sc=0;
        tb=sc+b;
        printf("Units Consumed: %.f
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,cp,b,sc,tb);
    }
    return 0;
}