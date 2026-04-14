#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], i, j, k, m, n, p, q;
    int c[10][10] = {0};

    printf("enter the row and coloumn of the 1st matrix : ");
    scanf("%d %d", &m, &n);
    printf("enter the element of the 1st matrix : ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter the row and coloumn of 2nd matrix : ");
    scanf("%d %d", &p, &q);

    if (n == p)
    {
        printf("enter the element of the 2nd matrix : ");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {

                for (k = 0; k < n; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("multiplication condition not matched");
    }
    return 0;
}