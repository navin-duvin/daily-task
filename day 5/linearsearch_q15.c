//15. Write a program in c to search an element from an array by linear search method.

#include <stdio.h>

int main(){
	int num,i;
	int arr[num];
	int search;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		printf("Element %d:",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&search);
	
	for(i=0;i<num;i++){
		if(arr[i] == search){
			printf("Element %d Found at index %d",arr[i],i);
			break;
		}
	}
	return 0;
}
