//Write a program to convert decimal to binary.

using namespace std;
#include <iostream>
#include <string>

long long dectobin(int num){
	long long bin=0;
	int re;
	int i=1;
	while(num!=0){
		re =num%2;
		num  = num/2;
		bin += re*i;
		i = i*10;
	}
	return bin;
}

int main(){
	int num;
	int binary;
	cout<<"Enter the number:";
	cin>>num;
	binary = dectobin(num);
	cout << num << " in decimal = " << binary << " in binary" << endl ;
	char bin[];
	bin[]= char(binary);	
	return 0;
}
