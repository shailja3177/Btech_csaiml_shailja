#include <stdio.h>
int main()
{
    int a, b, c;

    printf("pehla no likh\n");
    scanf("%d", &a);
    printf("dusra no likh\n");
    scanf("%d", &b);
    printf("teesra no likh\n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is the greatest\n");
    }
    if (b > a && b > c)
    {
        printf("b is the greatest\n");
    }
    if (c > a && c > b)
    {
        printf("c is the greatest\n");
    }
    return 0;
}