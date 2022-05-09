#include <stdio.h>
#include <math.h>

int main(){
    int arr[]={10,36,54,89,12};
    int value;
    int len=sizeof(arr)/sizeof(arr[0]);
    int weight[len-1];
    int sum=0;
    for(int i=0;i<len;i++)
    {
        value = sqrt(arr[i]);
        if(value*value==arr[i])
        {
            sum +=5;
        }
        if(arr[i]%4==0 && arr[i]%6==0){
            sum += 4;
        }
        if(arr[i]%2==0)
        {
            sum +=3;
        }
        weight[i]=sum;
        sum =0;
    }
    
    for(int i=0;i<len;i++){
        for(int j=1;j<len;j++){
            if(arr[i]>arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
                int t;
                t=weight[i];
                weight[i]=weight[j];
                weight[j]=t;
                
            }
            
        }
    }
    for(int i=0;i<len;i++){
        printf("<%d,%d>",arr[i],weight[i]);
    }
       return 0;  
}
   
