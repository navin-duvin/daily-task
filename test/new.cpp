using namespace std;
#include <iostream>

int main(){
	int *ptr = new int[];//{1,2,3,4,5};

	cout<<"Elements are\n";
	for(int i=0;i<5;i++){
		cout<<*(ptr+i);
	}
	cout<<"\n";
	delete ptr;
	cout<<"After delete \n";	
	for(int i=0;i<5;i++){
		cout<<*(ptr+i);
	}
	return 0;
}