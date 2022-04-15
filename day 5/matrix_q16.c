//16. Write a program in c to perform addition of two matrices.

#include <stdio.h>

int main(){
	int num,i,j;
	printf("Enter the size of an array:\n");
	scanf("%d",&num);
	int arr1[num][num],arr2[num][num];
	int mat[num][num];
	printf("Enter the arr1 elements:\n");
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
		    printf("Element [%d][%d]:",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter the arr2 elements:\n");
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
		    printf("Element [%d][%d]:",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	
	printf("Addition of two matrices:\n");
	for(i=0;i<num;i++){
	    for(j=0;j<num;j++){
	        mat[i][j]=arr1[i][j] + arr2[i][j];
	    }
	}
	
	for(i=0;i<num;i++){
	    for(j=0;j<num;j++){
	        printf("%d ",mat[i][j]);
	    }
	    printf("\n");
	}
	
	return 0;
}




