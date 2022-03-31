#include<stdio.h>

int insert(int arr[],int n){
	int i,pos,element;
	printf("Enter the element position - ");
	scanf("%d",&pos);
	pos--;
	printf("enter the new element - ");
	scanf("%d",&element);
	for(i=n-1;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	arr[pos]=element;
	for(i=0;i<=n;i++){
	printf("%d\n",arr[i]);
	}
}
int caller(int a[],int n,int (*ptr)(int *,int ))
{
	(ptr)(a,n);
}
int main(){
	int arr[20],n,i;
	int (*ptr)(int *,int);
	printf("size of array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++){
		scanf("\n%d",&arr[i]);
	}
	ptr=insert;
	caller(arr,n,ptr);	
}
