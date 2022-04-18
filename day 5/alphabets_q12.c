//12. Program to print all uppercase alphabets from 'A' to 'Z' using a while loop.

#include <stdio.h>


int main(){
	char ch='A';
	while(ch>=65 && ch<=90){
		printf("%c ",ch);
		ch++;
	}
	return 0;
}
