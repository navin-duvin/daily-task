//snake pattern 
/*

matrix in snake pattern
input:
// 1 2 3 
// 4 5 6
// 7 8 9

if index is odd it print from 0 to n.
if index is even it print from n to 0;

output:1 2 3 6 5 4 7 8 9
*/


#include <stdio.h>

int main(){
    
    int arr[4][4]={
                    {1,2,3,34},
                    {4,5,6,12},
                    {7,8,9,23},
                    {23,78,90,677}
                  };
    
    int row=3,col=3;
    
    for(int i=0;i<=col;i++){
        if(i%2==0){
            for(int j=0;j<=row;j++){
                printf("%d ",arr[i][j]);
            }
        }else{
            for(int j=row;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
    }
    return 0;
}
