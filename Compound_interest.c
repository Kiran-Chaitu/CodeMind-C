#include <stdio.h>
#include <math.h>
double CP(double b, int expo) {
    double r=1.0;
    while(expo!=0) {
        r*=b;
        --expo;
    }
    return r;
}
int main() {
    double p,r,t,ci;
    scanf("%lf %lf %lf",&p,&r,&t);
    ci=p*(CP((1+r/100),t));
    printf("%.2lf",ci);
    return 0;
}
