//Write a program in C to illustrate how to use goto statement.

using namespace std;
#include <iostream>

int main(){
	cout<<"A";
	cout<<"B";
	goto last;
	cout<<"C";
	cout<<"D";
	last:
	cout<<"E";
	cout<<"F";
	return 0;	
}
