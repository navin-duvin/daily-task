#include <stdio.h>
#include <stdlib.h>


#define MAX 5

int stack[MAX]; 
int top=-1;
int temp;
int num;
int first,second,result;

void push(int num){
	if(top ==MAX-1){
        printf("Stack overflow\n");
        return ;
    }
    top =top+1;
    stack[top] = num;
}
int pop(){
	if(top == -1){
        printf("Stack is empty\n");
        return -1;
    }
	temp = stack[top];
    top = top-1;
   		return temp;
}
char postfix(char expression[]){
	int i=0;
	while(expression[i] !='\0'){
			if(expression[i]>='0' && expression[i]<='9')
			{
				num = expression[i] -48;
				push(num);
			}
			else{
				first = pop();
				second = pop();
					switch(expression[i])
					{
						case '+':
							result = first +second;
							break;
						case '-':
							result = first - second;
							break;
						case '*':
							result = first * second;
							break;
						case '/':
							result = first /second;
							break;
					}
					push(result);
				}
				i++;
			}
			
	printf("The value of Expression %s is %d\n",expression,pop());
}
int main(){
	char expression[20];
	printf("Enter the expression:\n");
	scanf("%s",expression);
	char(*postfixpoint)(char []) = postfix;
	postfixpoint(expression);
	return 0;
}
