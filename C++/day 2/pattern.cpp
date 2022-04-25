/*Write a C program to print the following pattern:

                          *

                          * *

                          * * *

                          * * * *
*/
using namespace std;
#include <iostream>


int main(){
	int row,col,num=5;
	cout<<"Enter the number:\n";
	cin>>num;
	for(row=0;row<=num;row++){
		for(col=1;col<=row;col++){
			cout<<"* ";
		}
		cout<<"\n";
	}
}
