//Write a program in C to perform maths and character library function using switch case (use 5 operations on each)

using  namespace std;
#include <iostream>

int main(){
	int num1,num2,res=0;
	char opt;
	cout<<"Enter the number1 and number2:\n";
	cin>>num1>>num2;
	cout<<"Enter the operator:\n";
	cin>>opt;
	switch(opt){
		case '+':
		  	res = num1+num2;
			break;
		case '-':
			res=num1-num2;
			break;
		case '*':
			res=num1*num2;
			break;	
		case '/':
			res=num1/num2;
			break;	
		default:
			cout<<"invalid character\n";
	}
	cout<<"Result:"<<res;
	return 0;
}
