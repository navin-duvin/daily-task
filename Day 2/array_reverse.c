#include <stdio.h>

void reverse(int arr[],int n){
	int half = n/2;
	int l=n-1;
	for(int i=0;i<half;i++,l--){
	   int temp;
	   temp = arr[i];
	   arr[i] = arr[l];
	   arr[l] = temp;
	}
	printf("After reversing:");
	for(int i=0;i<n;i++){
	    printf("%d ",arr[i]);
	}
	printf("\n");

}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
    }
    void (*reversepoint)(int [],int) =reverse;
    reversepoint(arr,n);
    return 0;  
}
