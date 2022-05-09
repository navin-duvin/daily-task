//spiral printing in the array

#include <stdio.h>


int main(){
    int arr[5][5]={
                    1, 2, 3, 4, 5,
                    16,17,18,19,6,
                    15,24,25,20,7,
                    14,23,22,21,8,
                    13,12,11,10,9
    };
    
    int rowstart=0;int rowend=5;
    int colstart=0;int colend=5;
    	
    while(rowstart <rowend && colstart < colend){
           for(int i=colstart;i<colend;i++){
           	printf("%d ",arr[rowstart][i]);
           }
           rowstart+=1;

           for(int i=rowstart;i<rowend;i++){
           	printf("%d ",arr[i][colend-1]);
           }
           colend-=1;

    	for(int i=colend-1;i>=colstart;i--){
    		printf("%d ",arr[rowend-1][i]);
    	}      
    	rowend-=1;

    	for(int i=rowend-1;i>=rowstart;i--){
    		printf("%d ",arr[i][colstart]);
    	}      
    	colstart+=1;
    }
        return 0;
}