#include <stdio.h>
int main()
{

    int l, b, area, perimeter;
    printf("length likh idhar \n");
    scanf("%d", &l);
    printf("breadth likh idhar \n");
    scanf("%d", &b);

    area = l * b;
    perimeter = 2 * (l + b);

    if (area > perimeter)
    {
        printf("area is greater than perimeter\n");
    }
    else
    {
        printf("perimeter is greater than area\n");
    }

    return 0;
}