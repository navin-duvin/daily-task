//find second largest maximum element in the array

//i/p=[1,7,5,4,9]
//o/p = 7 
//without sorting the array

#include <stdio.h>

int main(){
    int arr[]={1,7,3,6,5,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    
    int frmax=-1,scmax=-1;
    for(int i=0;i<len;i++){
        if(frmax<arr[i]){
            scmax=frmax;
            frmax=arr[i];
        }else if(scmax<arr[i]){
            scmax=arr[i];
        }
    }
    
    printf("%d %d",frmax,scmax);
    return 0;
}