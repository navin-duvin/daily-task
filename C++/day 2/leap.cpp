//Leap year or not using decision.

using namespace std;
#include <iostream>

int main(){
	int year;
	cout<<"Enter the year to check leap year or not:\n";
	cin>>year;
	
	if(year%400==0){
		printf("%d is leap year\n",year);
	}else if(year%100==0){
		printf("%d is not a leap year\n",year);
	}else if(year%4==0){
		printf("%d is a leap year\n",year);
	}else{
		printf("%d is not a leap year\n",year);
	}
	
	return 0;
}
