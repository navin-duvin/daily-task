#include <stdio.h>    
     
int main()    
{    
        
    int arr[] = {1, 2, 3, 4, 5};        
    int length = sizeof(arr)/sizeof(arr[0]);    
    int n = 3;      
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }       
     right(arr,length,n);  
     left(n); 
    printf("\n");      
        
    return 0;    
}
void right( int arr[],int len,int n){

for(int i=0;i<n;i++){    
        int j, lastIndex;    
          
        lastIndex = arr[len-1];    
        
        for(j = len-1; j > 0; j--){       
            arr[j] = arr[j-1];    
        }       
        arr[0] = lastIndex;    
    } 
    printf("\n");
    printf("Array after right rotation: \n");    
    for(int i = 0; i< len; i++){    
        printf("%d ", arr[i]);    
    }  

}
void left(int n){

	int arr1[]={1,2,3,4,5};
	int len = sizeof(arr1)/sizeof(arr1[0]);
    for(int i = 0; i < n; i++){    
        int j, first;          
        first = arr1[0];            
        for(j = 0; j < len-1; j++){               
            arr1[j] = arr1[j+1];    
        }   
        arr1[j] = first;    
    }    
        
    printf("\n");    
    printf("Array after left rotation: \n");    
    for(int i = 0; i < len; i++){    
        printf("%d ", arr1[i]);    
    }    
}
