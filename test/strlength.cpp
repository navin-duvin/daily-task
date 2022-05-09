//Create an array that contains any string, 
//where remove all occurrences of any special characters and spaces and find the length of the string w/o using strlen().

#include <iostream>
using namespace std;

int istrue(char ch){
	return ((48<=ch && ch<=57) || (97<=ch && ch<=122) || (65<=ch && ch<=90));
}

void length(char str[]){
	int i,len = 0;
	for(i=0;str[i]!='\0';i++){
		if(istrue(str[i]))
		{
			len++;
		}
	}
	cout<<"The length of string is "<<len<<endl;
}
int main(){
	char str[20];
	cout<<"Enter the string:\n";
	cin>>str;
	length(str);
	return 0;
}
