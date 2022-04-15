//13. Write a program to take input of 10 elements, store and display it using one Dimensional array.

#include <stdio.h>  
  
int main(){  
    int arr[10]; 
    int i;  
    printf("store and Print elements of an array:\n");
    printf("enter the elements in the array:\n");  
    for(i=0; i<10; i++){  
	    printf("element:%d : ",i);
        scanf("%d", &arr[i]);  
    }  
    printf("\nArray Elements are: ");  
    for(i=0; i<10; i++){  
        printf("%d ",arr[i]);  
    } 
    printf("\n");
	return 0;	
}
