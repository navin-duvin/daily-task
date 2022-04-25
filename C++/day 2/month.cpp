//Write a program in C to read any month number in integer and display the month name in. the word.<<using switch case


using namespace std;
#include<iostream>

int main(){
	int month;
	cout<<"Enter the month number:\n";
	cin>>month;
	
	switch(month){
		case 1:
			cout<<"This month is January";
			break;
		case 2:
			cout<<"This month is Febraury";
			break;
		case 3:
			cout<<"This month is March";
			break;
		case 4:
			cout<<"This month is April";
			break;
		case 5:
			cout<<"This month is May";
			break;
		case 6:
			cout<<"This month is June";
			break;
		case 7:
			cout<<"This month is July";
			break;
		case 8:
			cout<<"This month is August";
			break;
		case 9:
			cout<<"This month is september";
			break;
		case 10:
			cout<<"This month is october";
			break;
		case 11:
			cout<<"This month is November";
			break;
		case 12:
			cout<<"This month is December";
			break;
		default:
			cout<<"There is not month";
			break;
	}
	return 0;
}
