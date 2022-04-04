#include<stdio.h>
int sort(int *arr, int n) {
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          int temp;
          if(arr[i] >arr[j]){
              temp=arr[i];
              arr[i] =arr[j];
              arr[j] = temp;
          }
      }
  }

  printf("After sort: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ",arr[i]);
  }
}
int caller(int arr[],int n,int (*ptr)(int *,int )){
	(*ptr)(arr,n);
}
int main() {
    int num;
     printf("Enter the number of elements:");
        scanf("%d",&num);
   int arr[num];
   printf("Enter the elements:");
   for(int i=0;i<num;i++){
      scanf("%d",&arr[i]);
   }
   
  int (*ptr)(int *,int);
  int n = sizeof(arr) / sizeof(arr[0]);
   printf("Before sort: \n");
   for (int i = 0; i < n; i++) {
    printf("%d ",arr[i]);
  }
  printf("\n");
  ptr=sort;
  caller(arr,n,ptr);
  return 0;
}
