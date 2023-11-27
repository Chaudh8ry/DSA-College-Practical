#include <stdio.h>
int main()
{
    int n;
    printf("Enter No. of Elements in Matrix: ");
    scanf("%d", &n);

    int i, j, a[n][n];
    printf("Enter Elements in Matrix: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d \n", &a[i][j]); // Taking Input
        }
    }

    printf("Your Matrix : ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]); // Taking Input
            if (j == n - 1)
                printf("\n");
        }
    }

    printf("Transpose of Matrix: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("%d ", a[j][i]);
            }
            // printf("%d ", a[j][i]); // Taking Input
            if (j == n - 1)
                printf("\n");
        }
    }
    return 0;
}