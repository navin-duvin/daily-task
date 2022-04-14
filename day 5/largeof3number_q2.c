//2. Largest among three numbers using nested if statement

#include <stdio.h>

int main(){
	int num1,num2,num3;
	printf("Enter number1 number2 and number3:\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	int max;
	//max = num1>num2 && num1 > num3? num1:num2>num3?num2:num3;
	if(num1>num2 && num1>num3){
		max=num1;
		printf("largest among %d %d %d is %d",num1,num2,num3,max);
	}else if(num2>num3){
		max=num2;
		printf("largest among %d %d %d is %d",num1,num2,num3,max);
	}else{
		max=num3;
		printf("largest among %d %d %d is %d",num1,num2,num3,max);
	}
	
	return 0;
}
