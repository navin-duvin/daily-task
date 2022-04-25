/*Write a program to print the following pattern

                         1

                         2 3

                         4  5   6

                         7  8   9  10
*/

using namespace std;
#include <iostream>

int main(){
	int num=5;
	int row,col,pat=1;

	for(row=0;row<=num;row++){
		for(col=1;col<=row;col++){
			cout<<pat<<" ";
			pat++;
		}
	cout<<"\n";
	}
	return 0;
}
