//17. Write a program to sum of two numbers using pointer

#include <stdio.h>

int main(){
	int num1,num2;
	int *p1=&num1;
	int *p2=&num2;
	printf("Enter the two number:\n");
	scanf("%d %d",&num1,&num2);
	int sum=0;
	
	sum = *p1 +*p2;
	printf("Sum of %d %d is %d",*p1,*p2,sum);
	
	return 0;
	
}
