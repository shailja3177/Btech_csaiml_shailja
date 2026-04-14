#include<stdio.h>
int main(){
    int arr[10],n,i,j,temp;
    printf("enter the number of size ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    scanf("%d",&arr[i]);

    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array :");
    for(i=0; i<n; i++)
       { printf("arr[%d]=%d\n",i,arr[i]); }
    printf("the 1st greatest is %d and 2nd greatest is %d",arr[n-1],arr[n-2]);
        

        
    return 0;
}