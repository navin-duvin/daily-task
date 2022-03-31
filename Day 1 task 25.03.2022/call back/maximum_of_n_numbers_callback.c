#include<stdio.h>
int selection(int *arr, int n) {
  int i,j;
  for (i = 0; i < n - 1; i++) {
    int mini = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }

  printf("After selection sort: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ",arr[i]);
  }
  printf("\nThe maximum number is %d",arr[n-1]);
}
int caller(int arr[],int n,int (*ptr)(int *,int )){
	(*ptr)(arr,n);
}
int main() {
  int arr[] = {13,46,24,52,20,9};
  int (*ptr)(int *,int);
  int n = sizeof(arr) / sizeof(arr[0]);
   printf("Before selection sort: \n");
   for (int i = 0; i < n; i++) {
    printf("%d ",arr[i]);
  }
  printf("\n");
  ptr=selection;
  caller(arr,n,ptr);
  return 0;
}
