//WAP in c to finds the total marks and percentage.
#include<stdio.h>
int main(){
    int math, phy,chem,hindi,eng;
    int tm;//tm is sum of all subject marks.
    float p;
    printf("enter the marks of all subject:");
    scanf("%d %d %d %d %d",&math,&phy,&chem,&hindi,&eng);
    tm = math+phy+chem+hindi+eng;
    p = tm/5;
    printf("total marks is :%d \npercentage is :%f",tm,p);
    return 0;
}
