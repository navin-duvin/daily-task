// Largest among three numbers using nested if statement

using namespace std;
#include <iostream>

int main(){
	int num1,num2,num3;
	cout<<"Enter number1 number2 and number3:\n";
	cin>>num1>>num2>>num3;
	
	int max;
	//max = num1>num2 && num1 > num3? num1:num2>num3?num2:num3;
	if(num1>num2 && num1>num3){
		max=num1;
		cout<<"largest among"<<" "<<num1<<" "<<num2<<" "<<num3<<" "<<max;
	}else if(num2>num3 && num2 >num1){
		max=num2;
		cout<<"largest among"<<" "<<num1<<" "<<num2<<" "<<num3<<" "<<max;
	}else if(num3>num1 && num3>num2){
		max=num3;
		cout<<"largest among"<<" "<<num1<<" "<<num2<<" "<<num3<<" "<<max;
	}else{
		cout<<num1<<" "<<num2<<" "<<num3<<" "<<"are same";
	}
	
	return 0;
}
