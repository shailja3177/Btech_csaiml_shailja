#include<stdio.h>
int main (){
    int arr[5];
    for(int i=0; i<5; i++){
        int a=i+1;
        printf("enter the elment number %d : ",a);
        scanf("%d",&arr[i]);
    }
    
    printf("required element no. 4 is : %d", arr[(3)]);
    return 0;
}