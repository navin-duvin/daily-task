#include <stdio.h>
void main()
{
	int arr[3][3];
	int i, j, x, y;
	int  even,  odd;
 
	printf("Enter the order of the matrix \n");
	scanf("%d %d", &x, &y);
	printf("Enter the elements of matrix \n");
    even = 0;
    odd = 0;
	for (i = 0; i < x; ++i)
	{
            for (j = 0; j < y; ++j)
            {
                 scanf("%d", &arr[i][j]);
                 if ((arr[i][j] % 2) == 0)
                 {
                     ++even;
                 }
                 else
                     ++odd;
             }
	}
	printf("The given matrix is \n");
	for (i = 0; i < x; ++i)
	{
        for (j = 0; j < y; ++j)
        {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n The frequency  of odd number  = %d \n", odd);
    printf("The frequency  of even number = %d\n", even);

}
