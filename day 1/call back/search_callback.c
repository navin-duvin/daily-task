#include<stdio.h>
void search(int *arr){
	int i,search,count=0;
	for(i=0;arr[i]!='\0';i++){
		count++;
	}
	printf("search a number in between 0 to 10\n");
	scanf("%d",&search);
	for(i=0;arr[i]!='\0';i++){
		if(arr[i]==search){
			printf("Element is found\n");
			break;
		}
	}
	if(i==count){
		printf("Element not found");
	}
}
void display(int *arr,void (*ptr)(int *)){
	ptr(arr);
}
int main(){
	int arr[10]={1,2,3,7,10};
	void (*ptr)(int *);
	ptr=search;
	display(arr,ptr);
}
