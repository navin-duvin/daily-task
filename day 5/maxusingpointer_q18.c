//18. Write a program in c to find the maximum number between two numbers using a Pointers

#include  <stdio.h>

int main(){
	int num1,num2;
	int *p1=&num1;
	int *p2=&num2;
	
	printf("Enter the number1 and number2 :\n");
	scanf("%d %d",&num1,&num2);
	int max=0;
	
	if(*p1>*p2){
		max= *p1;
		printf("Maximum of %d and %d is %d",*p1,*p2,max);
	}else if(*p2>*p1){
		max= *p2;
		printf("Max of %d and %d is %d ",*p1,*p2,max);
	}else{
		printf("Both are equal");
	}
	
	
	return 0;
	
}
