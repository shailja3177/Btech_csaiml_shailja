#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        int a = i + 1;
        printf("enter the element number %d : ", a);
        scanf("%d", &arr[i]);
    }
    int el;
    printf("which element number you want to print : ");
    scanf("%d", &el);
    if (el < 1 || el > 5)
    {
        printf("invalid input");
    }
    else
    {
        int printvalue = (el - 1);
        printf("required element : %d", arr[printvalue]);
    }
    return 0;
}