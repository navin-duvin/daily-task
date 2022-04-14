#include<stdio.h>
#include <stdlib.h>
char stack[20];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

void evaluatePostfix(char expression[]){
	
	int check = 0;
	int i=0;
    while(expression[i] != '\0')
    {
        if (expression[i] == '{' || expression[i] == '[' || expression[i] == '('){
        	push(expression[i]);
		}
		else if(expression[i] == '}' || expression[i] == ']' || expression[i] == ')'){
			if (top == -1)
				check = 1;
			else{
				char ch = pop();
				if (expression[i] == '}' && (ch == '(' || ch == '[')){
					check = 1;
				}
				if (expression[i] == ']' && (ch == '(' || ch == '{')){
					check = 1;
				}
				if (expression[i] == ')' && (ch == '{' || ch == '[')){
					check = 1;
				}
			}
		}
		i++;
    }
    if(top!=-1) 
    	check = 1;
    

    if(check!=0)
    	printf("Unbalanced");
   	else
   		printf("Balanced");   

}

int main()
{
    char expression[20];
    printf("Enter the expression :: ");
    scanf("%s",expression);
	evaluatePostfix(expression);
    return 0;
}

