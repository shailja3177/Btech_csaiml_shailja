#include<stdio.h>
int main()
{
    int n,f=0;
    printf("Enter number to check prime or not:");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f+=1;
        }
    }
    if(f==0)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is not prime");
    }
}