//Write a program to illustrate packing in structure with an example.


using namespace std;
#include <iostream>
#pragma pack(1)


struct test{
	int a;
	char b;
	char c;
};

int main(){
	cout<<"The size of struct stock is "<<sizeof(struct test)<<endl;
	return 0;
}
