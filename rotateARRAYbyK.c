#include <stdio.h>
int main()
{
    int n;
    printf("enter the array size : ");
    scanf("%d", &n);

    int arr[n], i, j, k, kvalue;
    printf("enter the number of time of rotation  : ");
    scanf("%d", &kvalue);
    
    printf("enter the array element : ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (k = 0; k <= kvalue; k++)
    {
        for (i = n - 1 - k; i != 0; i--)
        {   int temp = arr[i-2];
            arr[i+1] = arr[i];
            if(i==0){
            arr[0] = temp;
            }
        }
    }
    printf("the rotated array is as : ");
    for(i=0; i<n; i++)printf("%d",arr[i]);

    return 0;
}