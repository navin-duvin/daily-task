//19. C program to input and print array elements using pointers

#include <stdio.h>

int main(){
	int num,i,j;
	int arr[num];
	int *p1=&arr;
	
	printf("Enter the size of array:\n");
	scanf("%d",&num);
	printf("Enter the elemnent of array:\n");
	for(i=0;i<num;i++){
		printf("Element [%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("Element in the array are ");
	for(i=0;i<num;i++){
		printf("%d ",(*p1+i));
		//p1++;
	}
	return 0;
}
