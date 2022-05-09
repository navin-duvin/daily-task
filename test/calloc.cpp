
using namespace std;
#include <iostream>

int main(){

	int *ptr;
	int n;
	cout<<"Enter the size for calloc:\n";
	cin>>n;

	ptr=(int *)calloc(n,sizeof(int));

	cout<<"Enter the Elements \n";

	for(int i=0;i<n;i++){
		cin>>ptr[i];
	}
	cout<<"Elements are\n";
	for(int i=0;i<n;i++){
		cout<<*(ptr+i);
	}
	free(ptr);
	return 0;
}