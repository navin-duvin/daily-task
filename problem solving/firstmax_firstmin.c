/*1) Alternate sorting: Given an array of integers, rearrange the array in such a way that 
the first element is first maximum and second element is first minimum. 
    Eg.) Input  : {1, 2, 3, 4, 5, 6, 7}         
         Output : {7, 1, 6, 2, 5, 3, 4} */ 



/*
         Input  : {1, 2, 3, 4, 5, 6, 7}         
         Output : {7, 1, 6, 2, 5, 3, 4} */
         
/*
         Input  : {1, 2, 3, 4, 5, 6, 7}         
         Output : {7, 1, 6, 2, 5, 3, 4} */
         
         
#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,20};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]<arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int len1 = len%2==0 ? len/2 - 1:len/2;
    for(int k=0;k<=len1;k++){
        if(k==len-k-1){
            printf("%d",arr[k]);
            break;
        }
        printf("%d ",arr[k]);
        printf("%d ",arr[len-k-1]);
    }
    return 0;
}