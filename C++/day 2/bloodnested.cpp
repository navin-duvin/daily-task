//Program to check a person is eligible to donate blood using nested if.

using namespace std;
#include<iostream>

int main(){
	int age;
	cout<<"Enter the age:\n";
	cin>>age;
	
	if(age<65){
		//cout<<"You are not eligible to donate the blood:\n";
		if((age>=18) && (age <=65)){
			cout<<"You are eligible to donate the blood:\n";
		}else{
			cout<<"you are not eligible to donate the blood:\n";
		}
	}else{
		cout<<"You are not eligible to donate the blood:\n";
	}
	return 0;
}
