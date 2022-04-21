#include <stdio.h>

void swap(int num1,int num2){
	int temp;
	temp = num1;
	num1=num2;
	num2= temp;
	
	printf("Number after swapping are %d and %d\n",num1,num2);
}

int main(){
	int num1,num2;
	printf("Enter the two numbers:");
	scanf("%d %d",&num1,&num2);
	printf("Number before swapping are %d and %d\n",num1,num2);
	int (*swappoint)(int ,int) = swap;
	swappoint(num1,num2);
	
	return 0;

}
