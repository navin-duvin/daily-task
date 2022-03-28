#include <stdio.h>

int fib(int num){
	if(num ==1 || num ==2){
		return 1;
	}else{
	    return fib(num-1)+fib(num-2);
	}
}
int main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		printf("%d ",fib(i));
	}
	return 0;

}
