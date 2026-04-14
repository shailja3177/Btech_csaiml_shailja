#include <stdio.h>
int main()
{
    int n, i;
    printf("enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];

    printf("enter the array elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for (i = 0; i < n; i++){    
        if(i%2==0) arr[i]=arr[i]+10;        
        else arr[i] = arr[i]*2;}
        
       printf("the elements of the updated array are : ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}