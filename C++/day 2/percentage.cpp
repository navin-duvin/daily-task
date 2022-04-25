/*Write a program to take input of 5 subject. Find total and percent based on percent provide grade like:

             IF Per > 80 “A+”

             Per >= 65 and per <=80 “A”

             Per > =50 and per <=65 “B”

             Per >= 42 and per <=50 “C”

             Per < 42 “Fail”
*/

using namespace std;
#include<iostream>

int main(){
	float mark1,mark2,mark3,mark4,mark5,total;
	float percentage,average;
		cout<<"Enter the mark1:\n";
		cin>>mark1;
		cout<<"Enter the mark2:\n";
                cin>>mark2;
		cout<<"Enter the mark3:\n";
                cin>>mark3;
		cout<<"Enter the mark4:\n";
                cin>>mark4;
		cout<<"Enter the mark5:\n";
                cin>>mark5;
		
		total = mark1+mark2+mark3+mark4+mark5;
		percentage = (total / 500.0) * 100;
		average = total/5.0;
		cout<<"Total Marks secured out of 500:"<<total;
		cout<<"Your percentage is "<<percentage;
		cout<<"Your average is "<<average;
		
		if(percentage>80.0){
			cout<<"You have secured A+";
		}else if(percentage>= 65.0 && percentage<=80.0){
			cout<<"You have secured A";
		}else if(percentage >=50.0 && percentage <=65.0){
			cout<<"You have secured B";
		}else if(percentage >= 42.0 && percentage <=50.0){
			cout<<"You have secured C";
		}else{
			cout<<"You have failed";
		}
		
	return 0;
	
}
