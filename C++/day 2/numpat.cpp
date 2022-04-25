/*Write a program to print the following pattern

                         1

                         1 2

                         1  2   3

                         1  2   3  4*/

using namespace std;
#include <iostream>

int main(){
	int num=5;
	int row,col;
	for(row=0;row<=num;row++){
		for(col=1;col<=row;col++){
			cout<<col;
		}
		cout<<"\n";
	}
	return 0;
}
