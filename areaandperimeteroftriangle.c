//WAP in c to find area of triangle.
#include<stdio.h>
 int main(){
    int b,h;//a,b,c are sides of triangle,ar is area .
    printf("enter the sides of triangle:");
    scanf("%d %d",&b,&h);
   float ar = 0.5*b*h;
   printf("area is :%f",ar);
    return 0;
 }