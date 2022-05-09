
using namespace std;

#include <iostream>
#include <stdlib.h>

int main(){
	int *ptr;
	int n;
	cout<<"Enter the number:\n";
	cin>>n;
	ptr= (int *)malloc(n *sizeof(int));
	printf("Enter the array elements:\n");
	for(int i=0;i<n;i++){
		cin>>ptr[i];
	}

	cout<<"array elements are:\n";
	for(int i=0;i<n;i++){
		cout<<*(ptr+i);
	}

	free(ptr);
	////realloc 
	int r;
	cout<<"Enter the size for realloc:\n";
	cin>>r;

	ptr=(int *)realloc(ptr,r*sizeof(int));
	cout<<"Elements for realloc:\n";
	for(int i=0;i<n;i++){
		cin>>ptr[i];
	}

	cout<<"array elements after reallocation:\n";

	for(int i=0;i<n;i++){
		cout<<*(ptr+i);
	}

	free(ptr);
}