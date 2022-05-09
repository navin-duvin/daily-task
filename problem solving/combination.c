/* Given unsorted array find all combination of the element for a given sum. Order should be maintained. 
Input : 8 3 4 7 9 N=7 
Output {3 4 } {7} */

#include <stdio.h>

int main(){
    int arr[]={-2,9,7,4,3};
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum=7;
    for(int i=0;i<len;i++){
        if(arr[i]+arr[i+1]==sum){
            printf("{%d %d}",arr[i],arr[i+1]);
        }
        if(arr[i]==sum){
            printf("{%d}",arr[i]);
        }
    }
    
    return 0;
}

#include <stdio.h>

int main(){
    int arr[5][5]={1, 2, 3, 4, 5,
                   6, 7, 8, 9, 10, 
                   11,12,13,14,15,
                   16,17,18,19,20,
                   21,22,23,24,25
    };
    
    int rowstart=0,rowend=5;
    int colstart=0,colend=5;
    
    while(rowstart <rowend && colstart < colend){
        //print top row(left to right)
        for(int i=colstart;i<colend;i++){
            printf("%d ",arr[rowstart][i]);
        }
        rowstart+=1;
        
        ///print right (top to bottom)
        for(int i=rowstart;i<rowend;i++){
            printf("%d ",arr[i][colend]);
        }
        colend-=1;
        
        
        
        
        
    }
    return 0;
}