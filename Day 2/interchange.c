#include <stdio.h>
 
void main ()
{
    int arr[10][10];
    int i, j, m, n, a;
 
    printf("Enter the order of the matix \n");
    scanf("%d %d", &m, &n);
    if (m == n)
    {
        printf("Enter the elements of the matrix\n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                scanf("%dx%d", &arr[i][j]);
            }
        }
        printf("The given matrix is \n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf(" %d", arr[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < m; ++i)
        {
            a = arr[i][i];
            arr[i][i] = arr[i][m - i - 1];
            arr[i][m - i - 1] = a;
        }
        printf("The matrix after changing the \n");
        printf("main diagonal & secondary diagonal\n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf(" %d", arr[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("The given order is not square matrix\n");
}
