//Write a program to illustrate padding in structure with an example.

using namespace std;
#include <iostream>
#include <iomanip>
//#pragma pack(1) 
struct stock{
	int productid; // 4 bytes
	char productname[20]; //20 bytes
	int quantity; //4 bytes
	float unitprice; // 4 bytes
	char status; // 1 bytes total 33 
};

struct test{
	char a; // 1 bytes + 3 bytes wasted
	int b; // 4 bytes
	char c;// 1 bytes + 3 bytes wasted
};

int main(){
	struct stock product={100,"C++",10,120};
		
	cout<<"Productid"<<"\t"<<"Product name"<<"\t"<<"Product quantity"<<"\t"<<"Product unitprice"<<"\t"<<endl;
	cout<<product.productid<<setw(20)<<product.productname<<setw(20)<<product.quantity<<setw(20)<<product.unitprice<<endl;
	cout<<"The size of struct stock is "<<sizeof(stock)<<endl;
		cout<<"The size of struct stock is "<<sizeof(test);	
	return 0;
}
