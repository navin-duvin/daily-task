//13. Write a program to take input of 10 elements, store and display it using one Dimensional array .

#include<stdio.h>

int main(){
	int  arr[15];
	printf("Enter the number:\n");
	for(int i=0;i<10;i++){
		scanf("%d ",&arr[i]);
	}
	
	printf("printing elemnets in array:\n");
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
