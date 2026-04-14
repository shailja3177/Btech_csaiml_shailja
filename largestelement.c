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

    int largest = arr[0];
    for(i = 1; i < n; i++){
        if(largest<arr[i]){
            largest=arr[i];
        }}
        printf("%d",largest);

    return 0;
}