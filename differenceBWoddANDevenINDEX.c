#include<stdio.h>
int main(){
    int n,i,j,sum1=0, sum2=0;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements : ");
    for(i=0; i<n; i++)scanf("%d",&arr[i]);
    for(i=0; i<n; i++)if(i%2==0)sum1 = sum1+arr[i]; else{if(i%2!=0){sum2 = sum2+arr[i];}}
    
    printf("the difference of the sum of all the even indexed value elements and all the odd indexed value is %d .",sum1-sum2);
    return 0;
}