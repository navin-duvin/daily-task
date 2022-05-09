#include <stdio.h>

int main(){
	int start,end;
	char arr[4][4]={
		'1','1','1','1',
		'1','1','1','1',
		'1','1','1','1',
		'1','1','1','1'
	};

	printf("Enter the position index for 4x4 matrix:\n");
    scanf("%d %d",&start,&end);
   	

    for(int i=0;i<4;i++){
    	for(int j=0;j<4;j++){
    		int k=i+j;
    		if(j==end || i==start || i+j==start+end){
    			arr[i][j]='0';
    		}else{
    			arr[i][j]='X';
    		}
    		
    		if(start < end){
    			if(j-i == 1){
    				arr[i][j]='0';
    			}
    		}
    		else if(start == end){
    			if(i == j){
    				arr[i][j]='0';
    			}
    		}
    		else{
    			if(i-j==1){
    				arr[i][j]='0';
    			}
    		}
			
    	}
    }
    arr[start][end]='Q';
    printf("After finding queen position:\n");
    for(int i=0;i<4;i++){
    	for(int j=0;j<4;j++){
    		printf("%c ",arr[i][j]);
    	}
    	printf("\n");
    }

	return 0;
}