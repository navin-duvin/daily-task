/*
7. Write a program to following pattern
                 1
                 1  2
                 1  2  3
                 1  2  3  4
                 ==========
                 1  2  3  4
                 1  2  3  
                 1  2
                 1
*/


#include <stdio.h>

int main(){
	int num,row,col,line,below,i,print;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	for(row=1;row<=num;row++){
		for(col=1;col<=row;col++){
			printf("%d ",col);
		}
		printf("\n");
	}
		for(line=1;line<=num;line++){
			printf("= ");
		}
		printf("\n");
		for(i=1;i<=num;i++,print++){
			for(below=i,print=1;below<=num;below++,print++){
				printf("%d ",print);
			}
			printf("\n");	
		}
		
}

