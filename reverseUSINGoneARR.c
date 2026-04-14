#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 0, x, j = 4;      
    while(i < j)               
    {
        x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
        i++;
        j--;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
