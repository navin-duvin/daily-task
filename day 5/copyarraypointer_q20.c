//20. C program to copy one array to another using pointers

#include <stdio.h>

int main(){
	int num,i;
	int arr[num];
	int copy[num];
	int *p=&arr;
	printf("Enter the size of an array:\n");
	scanf("%d",&num);
	printf("enter the element in array:\n");
	for(i=0;i<num;i++){
		printf("Element [%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("copy elemnent in another array:\n");
	
	for(i=0;i<num;i++){
		copy[i] = (*p+i);
	}
	
	printf("printing elements in another array:\n");
	for(i=0;i<num;i++){
		printf("%d ",copy[i]);
	}
	return 0;
}
