 #include<stdio.h>
 #include<math.h>
 int main(){
    float p,r,t;//p is principal,r is rate,t is time.
    float si,ci;
    printf("enter the value of p,r,t:");
    scanf("%f %f %f",&p,&r,&t);
    si = (p*r*t)/100;
    ci = p*pow((1+r/100),t)-p;
    printf("simple interst is %f",si);
    printf("compound interest is %f",ci);
    return 0;
 }