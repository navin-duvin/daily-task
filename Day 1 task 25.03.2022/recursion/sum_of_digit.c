#include <stdio.h>

int sum(int num){
	if(num !=0){
	   return  (num % 10 + sum(num / 10));
	}else{
	   return num;
	}
}
int main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("sum 0f digit:%d\n",sum(num));
	return 0;
}
