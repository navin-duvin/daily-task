#include <stdio.h>



void search(int arr[],int len,int num){
	for(int i=0;i<=len;i++){
	    if(arr[i] == num){
		printf("Number %d found at index:%d\n",num,i);
	    }
	}
	
}
int main(){
	int num;
	int arr[5];
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("Enter the elements:");
	for(int i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to search:");
	scanf("%d",&num);
	void  (*searchpoint)(int [],int,int) = search;
	searchpoint(arr,len,num);
	return 0;

}
