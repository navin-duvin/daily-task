//sort element in odd position in descending order and elemnents in ascending order.

//  input: 13,2,4,15,12,10,5
//  output:13,2,12,10,5,15,4

#include <stdio.h>

int main(){
    int arr[]={13,2,4,15,12,10,5};
    
    int len =sizeof(arr)/sizeof(arr[0]);
    //printf("%d",len);
    for(int i=0;i<len;i++){
        for(int j=i+2;j<len;j=j+2){
            if((arr[i]<arr[j]) && (i%2==0)){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }if((arr[i]>arr[j]) && (i%2!=0)){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
    }
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}