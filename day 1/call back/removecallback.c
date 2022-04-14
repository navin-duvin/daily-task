#include<stdio.h>
int remove(int *arr){
	int i,j,k,element;
	for(i=0;arr[i]!='\0';i++){
		printf("%d\n",arr[i]);
	}
	j=i;
	printf("Enter the element to remove ");
	scanf("%d",&element);
	for(i=0;arr[i]!='\0';i++){
		if(arr[i]==element){
			for(k=i;arr[k]!='\0';k++){
			arr[k]=arr[k+1];
			}
		}
	}
	arr[j]='\0';
	for(i=0;arr[i]!='\0';i++){
		printf("%d\n",arr[i]);
	}	
}
void display(int *arr,int (*ptr)(int *))
{
	ptr(arr);
}
int main(){
	int arr[10]={1,2,3,4,5,6,7,8};
	int (*ptr)(int *)=remove;
	display(arr,ptr);
}
