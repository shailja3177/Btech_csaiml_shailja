#include <stdio.h>
int main()
{
    int n;
    printf("enter the array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements : ");
    for (int i = 0; i < n; i++)                    //incomplete work//
    {
        scanf("%d", &arr[i]);    
    }
    for (int i = 0; i < n; i++)
    {
            for (int k = 1; k <= n; k++)
            {
                if (arr[i] == k){}
                else
                {
                    printf("%d is missing.",k);
                }
            }
    }
    return 0;
}