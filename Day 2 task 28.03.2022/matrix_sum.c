#include <stdio.h>

void main()
{
     int i,j,k,arr[10][10],rowsum[10],columnsum[10],n;
	 
       printf("Input the size of the square matrix : ");
     scanf("%d", &n); 
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr[i][j]);
            }
        }  
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr[i][j]);
	    printf("\n");
	 }

     for(i=0;i<n;i++)
     {
	  rowsum[i]=0;
	  for(j=0;j<n;j++)
	  rowsum[i]=rowsum[i]+arr[i][j];
     }
 
    
      for(i=0;i<n;i++)
      {
	  columnsum[i]=0;
	  for(j=0;j<n;j++)
		columnsum[i]=columnsum[i]+arr[j][i];
      }
 
      printf("The sum or rows and columns of the matrix is :\n");
      for(i=0;i<n;i++)
      {
	   for(j=0;j<n;j++)
	      printf("% 4d",arr[i][j]);
	   printf("% 8d",rowsum[i]);
	   printf("\n");
       }
       printf("\n");
	    for(j=0;j<n;j++)
             {
	        printf("% 4d",columnsum[j]);
             }
            printf("\n\n"); 
  }
