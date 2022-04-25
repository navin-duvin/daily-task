//Write a program in C to print a sum of odd no between 0 to 10 using continue.

using namespace std;
#include <iostream>

int main(){
	int num=0;
	int sum=0;
	while(num<10){
		num=num+1;
		if(num%2==0){
		    continue;
		}
	sum = sum + num;
	}
	cout<<"sum of odd no. between 0 to 10: "<<sum;
	return 0;
}
