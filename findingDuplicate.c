#include<stdio.h>
int main(){
    int i, j, n=5, arr[5]={1,2,3,3,5};
    for(i=0; i<n; i++){
        for(j=0; j<i; j++)
        if(arr[i]==arr[j]){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}