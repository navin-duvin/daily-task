#include <stdio.h>

void array(int arr[],int len){
	//int len = sizeof(arr)/sizeof(arr[0]);
	printf("Array elements: ");
	for(int i=0;i<len;i++){
		printf("%d ",arr[i]);
}
	printf("\n");
}
int main(){
    int arr[5];
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the array elements:");
    for(int i=0;i<len;i++){
	scanf("%d",&arr[i]);	
    }
    int (*arraypoint)(int[],int)=array;
    arraypoint(arr,len);
	return 0;
}
