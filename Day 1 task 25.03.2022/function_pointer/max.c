#include <stdio.h>


int max(int num1,int  num2){
	if(num1 > num2)
		return num1;
	else
		return num2;
}
int main(){
	int num1,num2;
	printf("Enter two number:");
	scanf("%d %d",&num1,&num2);
	int (*maxpoint) (int ,int)= max;
	maxpoint = max;
	printf("Maximum of %d and %d is :%d\n",num1,num2,maxpoint(num1,num2));
	return 0;
}
